class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()) return 0 ;
        int prev2 = nums[0];
        if(nums.size() == 1) return nums[0];
        int prev1 = max(nums[0], nums[1]);
        for(int i = 2 ; i < n ; i++){
            int cur = max(nums[i]+prev2,prev1);
            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }
};