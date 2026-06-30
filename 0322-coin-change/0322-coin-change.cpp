class Solution {
public:
    int add(vector<int>& dp,vector<int>& coins,int n , int INF){
        if(n == 0) return 0;
        if(n < 0) return INF;
        if(dp[n]!=-2) return dp[n];
        dp[n] = INF;
        for(int coin : coins){
            int ans = add(dp,coins,n-coin,INF);
            dp[n] = min(ans+1,dp[n]);
        }
        return dp[n];
    }
    int coinChange(vector<int>& coins, int amount) {
        int INF = amount+1;
        vector<int> dp(amount+1,-2);
        dp[0] = 0;
        int n = amount;

        int ans = add(dp,coins,n,INF);
        if(ans == INF) return -1;
        return ans;
        
    }
};