class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=0,hei=INT_MIN;
        for(int i =0;i<nums.size();i++){
            if(hei < nums[i]){
                ans = i ;
                hei = nums[i];
            }
        }
        return ans;
        
    }
};