class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,ans=0,j=0,k=1;
        for(int i =0;i<prices.size();i++){
            if(prices[j]>prices[k]){
                j=k;
                k++;
            }
            else if(prices[j]<prices[k]){
                 profit+= prices[k] - prices[j];
                 j=k;
                 k++;
            }
            else if(k>=prices.size()-1){
                break;
            }
            else{
                k++;
            }
        }
        return profit;
        
    }
};