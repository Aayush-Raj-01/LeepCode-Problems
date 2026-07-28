class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0;
        int maxi = INT_MIN;
        for(int x : nums){
            cur += x;
            if(cur < 0 ) cur = 0;
            maxi = max(cur,maxi);
        }
        if(maxi == 0 ){
        maxi = INT_MIN;
            for(int x : nums){
                if(maxi < x){
                    maxi = x;
                }
            }
        }
        return maxi;
        
    }
};