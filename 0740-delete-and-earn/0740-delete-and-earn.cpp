class Solution {
public:
    int yea(int n , vector<int>& dp , vector<int>& nums){
        if(n < 0) return 0;
        if(n == 0) return nums[0];
        if(n == 1) return max(nums[0],nums[1]);
        if(dp[n] != -1) return dp[n];
        dp[n] = max(nums[n] + yea(n-2,dp,nums),yea(n-1,dp,nums));
        return dp[n];
    }
    int deleteAndEarn(vector<int>& nums) {
        if(nums.empty()) return 0;
        vector<int> ognums(*max_element(nums.begin(),nums.end())+1,0);
        for(int i = 0 ; i < nums.size() ;i++){
            ognums[nums[i]]+= nums[i];
        }
        vector<int> dp(ognums.size(),-1);
        int n = ognums.size()-1;
        return yea(n,dp,ognums);
        
    }
};