class Solution {
    static constexpr int MMAX = (1 << 11);
public:
    int uniqueXorTriplets(vector<int>& nums) {
        array<bool, MMAX> uniq{};
        array<bool, MMAX> ans{};
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j <= i; j++) {
                uniq[nums[i] ^ nums[j]] = 1;
            }
        }
        for (int i = 0; i < MMAX; i++) {
            if (uniq[i]) {
                for (auto n : nums) {
                    ans[i ^ n] = true;
                }
            }
        }
        int val = 0;
        for (int i = 0; i < MMAX; i++) {
            val += ans[i];
        }
        return val;
    }   
};
