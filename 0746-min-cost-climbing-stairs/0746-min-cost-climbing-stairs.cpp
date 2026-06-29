class Solution {
public:

    int cll(vector<int>& dp,vector<int>& cost,int i){
        if(i >= cost.size() ) return 0;
        if(dp[i] != -1){
            return dp[i];
        }
        dp[i] = cost[i] + min(cll(dp,cost,i+1),cll(dp,cost,i+2));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        int i = 0;
        return min(cll(dp, cost, 0), cll(dp, cost, 1));
    }
};