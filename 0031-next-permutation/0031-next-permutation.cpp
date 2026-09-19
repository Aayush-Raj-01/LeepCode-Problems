class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = 0, j = 0;
        if(nums.size() <= 1) return;
        for (i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1])
                break;
            if (i == 0) {
                reverse(nums.begin(), nums.end());
                return;
            }
        }
        for (j = nums.size() - 1; j >= 0; j--) {
            if (nums[i] < nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                break;
            }
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};