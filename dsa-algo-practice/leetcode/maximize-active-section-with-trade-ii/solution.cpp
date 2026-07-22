struct SegTree {
	int n;
	vector<int> st;
	int merge(int a, int b) {
		return max(a, b);
	}
	int NEUTRAL = 0;

	SegTree() : n(0) {}
	SegTree(int _n) { init(_n); }
	SegTree(vector<int>& v) { build(v); }

	void init(int _n) {
		n = _n;
		st.assign(4 * n + 5, NEUTRAL);
	}

	void build(vector<int>& v) {
		init(v.size());

		if (n > 0) {
			build(1, 0, n - 1, v);
		}
	}

	void build(int p, int l, int r, vector<int>& v) {
		if (l == r) {
			st[p] = v[l];
			return;
		}

		int m = (l + r) >> 1;

		build(p << 1, l, m, v);
		build(p << 1 | 1, m + 1, r, v);

		st[p] = merge(st[p << 1], st[p << 1 | 1]);
	}

	void update(int idx, int val) {
		if (idx < 0 || idx >= n) {
			throw out_of_range("Segment tree update index out of range");
		}

		update(1, 0, n - 1, idx, val);
	}

	void update(int p, int l, int r, int idx, int val) {
		if (l == r) {
			st[p] = val;
			return;
		}

		int m = (l + r) >> 1;

		if (idx <= m) {
			update(p << 1, l, m, idx, val);
		} else {
			update(p << 1 | 1, m + 1, r, idx, val);
		}

		st[p] = merge(st[p << 1], st[p << 1 | 1]);
	}

	int query(int l, int r) {
		if (n == 0) return NEUTRAL;

		return query(1, 0, n - 1, l, r);
	}

	int query(int p, int l, int r, int ql, int qr) {
		if (r < ql || qr < l) {
			return NEUTRAL;
		}

		if (l >= ql && r <= qr) {
			return st[p];
		}

		int m = (l + r) >> 1;

		return merge(query(p << 1, l, m, ql, qr), query(p << 1 | 1, m + 1, r, ql, qr));
	}
};

class Solution {
public:
    vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>>& queries) {
        int n = s.size();
        int activeCount = count(begin(s), end(s), '1');

        vector<int> blockStart;
        vector<int> blockEnd;
        int i = 0;

        while (i < n) {
            if (s[i] == '0') {
                blockStart.push_back(i);
                while (i < n && s[i] == '0') i++;
                blockEnd.push_back(i - 1);
            } else {
                i++;
            }
        }

        int blockCount = blockStart.size();

        if (blockCount < 2) {
            return vector<int>(queries.size(), activeCount);
        }

        vector<int> blockSize(blockStart.size());
        for (int i = 0; i < blockStart.size(); i++) {
            blockSize[i] = blockEnd[i] - blockStart[i] + 1;
        }

        vector<int> pairSize(blockCount - 1);

        for (int j = 0; j + 1 < blockCount; ++j) {
            pairSize[j] = blockSize[j] + blockSize[j + 1];
        }

        SegTree* st = new SegTree(pairSize);

        vector<int> result;
        for (auto q : queries) {
            int l = q[0];
            int r = q[1];

            int low = lower_bound(begin(blockEnd), end(blockEnd), l) - begin(blockEnd);
            int high = upper_bound(begin(blockStart), end(blockStart), r) - begin(blockStart) - 1;

            int maxPairSum = 0;
            if (low < high) {
                int firstLen = blockEnd[low] - max(blockStart[low], l) + 1;
                int lastLen = min(blockEnd[high], r) - blockStart[high] + 1;

                if (high - low == 1) {
                    maxPairSum = firstLen + lastLen;
                } else {
                    int pair1 = firstLen + blockSize[low + 1];
                    int pair2 = blockSize[high - 1] + lastLen;
                    int rmq = st->query(low + 1, high - 2);
                    maxPairSum = max({pair1, pair2, rmq});
                }
            }
            result.push_back(activeCount + maxPairSum);
        }

        return result;
    }
};
