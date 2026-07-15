class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> result;
        int right = 0, left = 0, zeros = 0;
        int n = arr.size();

        for (left = 0; left < n && right < n; left++) {
            int x = arr[left];

            if (x == 0) {
                right += 2;
            } else {
                right += 1;
            }
        }

        if (left == right) {
            return;
        } else {
            left--;
            if (arr[left] == 0) {
                if (right - n == 2) {
                    left--;
                } else if (right - n == 1) {
                    zeros = 1;
                }
            }
        }

        for (int k = n - 1; left >= 0; left--) {
            if (arr[left] == 0) {
                if (zeros == 0) {
                    arr[k--] = 0;
                    arr[k--] = 0;
                } else {
                    arr[k--] = 0;
                    zeros = 0;
                }
            } else {
                arr[k--] = arr[left];
            }
        }
    }
};
