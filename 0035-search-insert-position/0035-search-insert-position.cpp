class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = end/2;
        int ans=0;
        while(start<=end){
            if(target == nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                start = mid+1;
                mid  = (start + end)/2;
            }
            else if(target<nums[mid]){
                end = mid-1;
                mid =(start + end)/2;
            }
            
        }
        return start;
        
    }
};