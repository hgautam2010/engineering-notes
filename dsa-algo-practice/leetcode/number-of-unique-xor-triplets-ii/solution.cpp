class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int maxValue = *max_element(nums.begin(), nums.end());

        int limit = 1;
        while (limit <= maxValue) {
            limit <<= 1;
        }

        vector<bool> pairXor(limit, false);
        vector<bool> tripletXor(limit, false);

        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                pairXor[nums[i] ^ nums[j]] = true;
            }
        }

        for (int x : nums) {
            for (int value = 0; value < limit; ++value) {
                if (pairXor[value]) {
                    tripletXor[value ^ x] = true;
                }
            }
        }

        return count(tripletXor.begin(), tripletXor.end(), true);
    }
};
