class Solution(object):
    def add(self,dp,coins,n,INF):
        if(n == 0):
            return 0
        if(n < 0):
            return INF

        if(dp[n] != -2):
            return dp[n]
        dp[n] = INF
        for coin in coins:
            ans = self.add(dp,coins,n-coin,INF)
            dp[n] = min(ans+1,dp[n])

        
        return dp[n]


    def coinChange(self, coins, amount):
        INF = amount + 1
        dp = [-2] * (amount + 1)
        dp[0] = 0
        n = amount
        ans =  self.add(dp,coins,n,INF)
        return -1 if ans == INF else ans

        