class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        cost.sort()
        ans = 0
        if len(cost) == 1:
            ans = cost[0]
            return ans
        for i in range(len(cost)-1, -1 ,-3):
            ans += cost[i] 
            if i - 1 >= 0:
                ans += cost[i - 1]
        
        return ans

        
        