class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int mx = nums[0];
        
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            nums[i] = gcd(mx, nums[i]);
        }
        
        sort(nums.begin(), nums.end());
        
        long long sum = 0;
        int l = 0, r = n - 1;

        while (l < r) {
            sum += gcd(nums[l], nums[r]);
            l++;
            r--;
        }

        return sum;
    }
};
