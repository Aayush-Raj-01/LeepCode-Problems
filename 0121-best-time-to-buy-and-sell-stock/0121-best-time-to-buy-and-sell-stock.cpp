class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,j=0,k=1;
        for(int i=0; i<prices.size()-1;i++){
            if(prices[j]>prices[k]){
                j=k;
                k++;
            }
            else if(prices[j]<prices[k]){
                if(profit < prices[k]-prices[j]){
                    profit = prices[k]-prices[j];
                }
                k++;
            }
            else{
                k++;
            }
            

        }
        return profit;
        
    }
};