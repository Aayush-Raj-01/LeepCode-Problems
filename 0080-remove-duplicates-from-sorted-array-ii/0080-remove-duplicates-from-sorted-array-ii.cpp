class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0,k=0;
        for(int i=0 ; i<nums.size();i++){
            if(k > 0 && nums[k-1]!=nums[i]){
                 l=0;
            }
            if(l!=2){
                nums[k]=nums[i];
                k++;
                l++;
            }
            
        }
        return k;
    }
};