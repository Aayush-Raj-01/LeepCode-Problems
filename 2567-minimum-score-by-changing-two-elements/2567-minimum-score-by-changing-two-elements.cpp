class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans1, ans2,ans3,n=nums.size();
        ans1 = nums[n - 1] - nums[2];
        ans2 = nums[n - 3] - nums[0];
        ans3 = nums[n - 2] - nums[1]; 
        if(n <= 3) return 0;
        return min({ans1,ans2,ans3});
    }
};