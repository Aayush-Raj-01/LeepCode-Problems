class Solution {
public:
    int recus(int i ,int n , vector<int>& costs,vector<int>& dp){
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        int j = i +1 ;
        int cost = (costs[j-1] + (j-i)*(j-i)) + recus(j,n,costs,dp);
        j = i +2 ;
        if(j <= n){
        cost = min(cost,(costs[j-1] + (j-i)*(j-i)) + recus(j,n,costs,dp));
        }
        j = i +3 ;
        if(j <= n){
        cost = min(cost,(costs[j-1] + (j-i)*(j-i)) + recus(j,n,costs,dp));
        }
        dp[i] = cost;
        return dp[i];
        
    }
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1,-1);
        return recus(0,n,costs,dp);
    }
};