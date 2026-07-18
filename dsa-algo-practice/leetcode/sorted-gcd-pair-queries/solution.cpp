class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int n = nums.size();
        int maxVal = *max_element(begin(nums), end(nums));

        vector<int> divesorFreq(maxVal + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 1; j * j <= nums[i]; j++) {
                if (nums[i] % j == 0) {
                    divesorFreq[j]++;
                    if (nums[i] / j != j) {
                        divesorFreq[nums[i] / j]++;
                    }
                }
            }
        }

        vector<long long> pairWithGcd(maxVal + 1, 0);
        for (int g = maxVal; g >= 1; g--) {
            long long count = divesorFreq[g];
            pairWithGcd[g] = (count * (count - 1)) / 2;

            for (int mult = g * 2; mult <= maxVal; mult += g) {
                pairWithGcd[g] -= pairWithGcd[mult];
            }
        }

        vector<pair<int, long long>> gcdArr;

        long long prefix = 0;
        for (int i = 0; i <= maxVal; i++) {
            if (pairWithGcd[i] != 0) {
                prefix += pairWithGcd[i];
                gcdArr.push_back({ i, prefix });
            }
        }

        vector<int> result;

        for (auto q : queries) {
            int l = 0, r = gcdArr.size() - 1;
            int ans = -1;

            while (l <= r) {
                int m = l + ((r - l) / 2);

                if (gcdArr[m].second >= q + 1) {
                    ans = gcdArr[m].first;
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }

            result.push_back(ans);
        }

        return result;
    }
};
