class Solution {
public:
    int roob(int n, vector<int>& dp, vector<int>& nums) {
        if (n == 0)
            return nums[0];
        if (n == 1)
            return max(nums[0], nums[1]);

        if (dp[n] != -1)
            return dp[n];

        dp[n] = max(nums[n] + roob(n - 2, dp, nums), roob(n - 1, dp, nums));
        return dp[n];
    }
    int rob(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        vector<int> dp1(nums.size() + 1, -1);
        vector<int> dp2(nums.size() + 1, -1);
        vector<int> a(nums.begin(), nums.end() - 1);
        vector<int> b(nums.begin() + 1, nums.end());
        int n = nums.size();
        return max(roob(a.size()-1,dp1,a),roob(b.size()-1,dp2,b));
    }
};