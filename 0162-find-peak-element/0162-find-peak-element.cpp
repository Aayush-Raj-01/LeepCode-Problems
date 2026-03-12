class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans,end=nums.size()-1,mid=(nums.size()-1)/2,start=0;
        while(mid<=end){
            if(mid < nums.size()-1 && nums[mid] < nums[mid+1]){
                start=mid+1;
                mid = (start+end)/2;
            }else if(mid > 0 && nums[mid] < nums[mid-1]){
                end = mid-1;
                mid = (start+end)/2;
            }
            else{
                ans = mid;
                break;
            }

        }
        return ans;
        
    }
};