class Solution {
public:
    int part(vector<int>& nums, int low, int high) {
        int p = low + rand() % (high - low);

        swap(nums[p], nums[high]);
        p = high;
        high -= 1;

        while (low <= high) {
            while (low <= high && nums[low] <= nums[p]) {
                low++;
            }
            while (low <= high && nums[high] > nums[p]) {
                high--;
            }
            if (low < high) {
                swap(nums[low], nums[high]);
                low++;
                high--;
            }
        }

        swap(nums[low], nums[p]);
        return low;

    }

    void sortIt(vector<int>& nums, int low, int high) {
        if (low >= high) return;

        int p = part(nums, low, high);

        sortIt(nums, low, p - 1);
        sortIt(nums, p + 1, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        sortIt(nums, 0, nums.size() - 1);
        return nums;
    }
};
