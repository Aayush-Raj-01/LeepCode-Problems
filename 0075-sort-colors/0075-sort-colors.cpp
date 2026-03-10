class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start =0 , mid=0,end=nums.size()-1,temp=0;
        while(mid<=end){
            if(nums[mid] == 0){
                temp = nums[mid];
                nums[mid] = nums[start];
                nums[start] = temp;
                start++;
                mid++;
            }else if(nums[mid] == 2){
                temp = nums[mid];
                nums[mid] = nums[end];
                nums[end] = temp;
                end--;
            }else{
                mid++;
            }
        }
        
    }
};