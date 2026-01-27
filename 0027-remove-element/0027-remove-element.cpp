class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        int k = nums.size() - 1;
        int ans =0;
        for(int i =0 ; i < nums.size();i++){
            if(nums[i]==val){
                if(i<=k){
                    ans++;
                while(nums[k]==val && k>i){
                    k--;
                    ans++;
                }
                nums[k] = nums[k] + nums[i];
                nums[i] = nums[k] - nums[i];
                nums[k] = nums[k] - nums[i];
                k--;
            }
            else break;
          }
          
        }
        return nums.size()-ans;
        
    }
};