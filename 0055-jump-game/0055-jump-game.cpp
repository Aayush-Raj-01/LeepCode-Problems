class Solution {
public:
    bool canJump(vector<int>& nums) {
        int j=nums[0],k=1;
        bool ans = true;
        for(int i=1;i<nums.size();i++){
            if(j!=0)
            j--;
            else {
                ans = false;
                break;
            }
            if(j>=nums[k] && nums[k] != 0 ){
                k++;
            }else if(j<nums[k]){
                j=nums[k];
                k++;
            }
            else if(j==0 && k < nums.size()-1){
                ans = false;
                break;
            }else k++;
            
        }
        return ans;
        
    }
};