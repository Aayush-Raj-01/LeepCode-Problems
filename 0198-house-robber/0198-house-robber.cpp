class Solution {
public:

    int love(int n,vector<int>& nums,vector<int>& dp){
        if(n==1){
            return nums[0] > nums[1] ? nums[0] : nums[1];   
        }
        else if(n==0) return nums[0];
        else if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];

        int rob = nums[n] + love(n-2,nums,dp);
        int skip = love(n-1,nums,dp);
        dp[n] = max(rob,skip);

        return dp[n];
    }
    int rob(vector<int>& nums) {
        vector<int> dp (nums.size(),-1);
        int n = nums.size()-1;
        return love(n,nums,dp);
    }
};