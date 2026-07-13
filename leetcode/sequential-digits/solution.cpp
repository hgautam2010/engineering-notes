class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;

        for (int i = 1; i <= 9; i++) {
            int curr = 0;
            for (int j = i; j <= 9 && curr <= high; j++) {
                curr = curr * 10 + j;
                if (curr >= low && curr <= high) {
                    result.push_back(curr);
                }
            }
        }

        sort(result.begin(), result.end());

        return result;
    }
};
