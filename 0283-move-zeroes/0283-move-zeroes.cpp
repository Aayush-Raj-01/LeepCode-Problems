class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i =0 ; i < nums.size()-1;i++){
            if(nums[i]==0){
                int k = 1;
                while(true){
                if(i+k > nums.size()-1) break;
                if(nums[i+k] != 0){
                nums[i] = nums[i+k];
                nums[i+k] = 0;
                break;
                }
                k++;
                }
            }
        }
        
    }
};