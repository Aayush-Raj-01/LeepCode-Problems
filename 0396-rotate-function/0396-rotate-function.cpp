class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long sums=0,f=0,f1=0,max=INT_MIN;
        for(int i = 0 ; i < nums.size(); i++){
            sums += nums[i];
        }
        for(int i = 0 ; i < nums.size(); i++){
            f += nums[i]*i;
        }
        max = f;
        for(int i = 1 ; i < nums.size(); i++){
           f1 = f + sums - nums.size() * nums[nums.size()-i];
           if(f1 > max) max = f1;
           f = f1;
        }
        return max;

        
    }
};