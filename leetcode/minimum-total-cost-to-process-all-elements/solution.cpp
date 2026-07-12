class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long have = k;
        long long price = 0;
        long long cost = 0;
        long long mod = 1e9 + 7;

        for (auto x : nums) {
            if (have < x) {
                long long needK = ceil((double)(x - have) / k);
                have = have + needK * k;
                long long l, r;

                if ((price + needK) % 2 == 0) {
                    l = ((((price + needK) / 2) % mod) *
                         ((price + needK + 1) % mod)) %
                        mod;
                } else {
                    l = (((price + needK) % mod) *
                         (((price + needK + 1) / 2) % mod)) %
                        mod;
                }

                if (price % 2 == 0) {
                    r = (((price / 2) % mod) * ((price + 1) % mod)) % mod;
                } else {
                    r = (((price % mod) * (((price + 1) / 2) % mod))) % mod;
                }

                long long change = (mod + l - r) % mod;

                price += needK;

                cost = (cost + change) % mod;
            }
            have -= x;
        }

        return cost;
    }
};
