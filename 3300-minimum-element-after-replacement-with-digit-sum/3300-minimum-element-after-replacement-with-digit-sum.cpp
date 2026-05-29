class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0 ; i < nums.size();i++){
            int sum =0 ;
            while(nums[i]){
                int temp = nums[i]%10;
                sum += temp;
                nums[i] = nums[i] /10;
            }
            if(ans > sum) ans = sum;
        }
        return ans;
        
    }
};