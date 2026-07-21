class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones = 0;
        vector<vector<int>> count;

        char current = '2';

        for (auto c : s) {
            if (c == '1') {
                ones++;
            }

            if (current != c) {
                count.push_back({ c - '0', 0 });
                current = c;
            }

            count[count.size() - 1][1]++;
        }

        int mx = 0;

        for (int i = 1; i < count.size() - 1; i++) {
            if (count[i - 1][0] == 0 && count[i + 1][0] == 0 || count[i][0] == 1) {
                mx = max(mx, count[i - 1][1] + count[i + 1][1]);
            }
        }

        return mx + ones;
    }
};
