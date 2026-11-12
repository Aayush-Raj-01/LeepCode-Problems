class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi = 0 ;
        int inc = 1;
        int dec = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i-1] < nums[i]){
                inc++;
                maxi = max(maxi,dec);
                dec = 1;
            }else if(nums[i-1] > nums[i]){
                dec++;
                maxi = max(maxi,inc);
                inc = 1;
            }else{
                maxi = max({maxi,inc,dec});
                inc = 1;
                dec = 1; 
            }
        }
        maxi = max({maxi,inc,dec});
        return maxi;
        
    }
};