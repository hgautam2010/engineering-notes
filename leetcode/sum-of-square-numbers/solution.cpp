class Solution {
public:
    bool judgeSquareSum(long long c) {
        for (long long i = 0; i * i <= c; i++) {
            long long l = i, r = c;

            while (l <= r) {
                long long m = l + ((r - l) >> 1);
                long long prod = i * i + m * m;

                if (prod == c) return true;

                if (prod >= c) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }
        }
        return false;
    }
};
