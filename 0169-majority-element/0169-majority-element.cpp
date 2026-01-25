class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        n = (n/2) ;
        int ans = nums[n];
        return ans;
    }
};