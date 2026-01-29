class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0 || n == 1) return;  // Handle edge case
        
        k %= n;  // Handle k > n
        if(k == 0) return;  // No rotation needed
        


        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);
        
        reverse(nums.begin() + k, nums.end());
    }
};