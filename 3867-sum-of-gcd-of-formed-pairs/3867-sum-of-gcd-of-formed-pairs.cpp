class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int mx = nums[0];
        for (int i = 0 ; i < nums.size() ;i++) {
            if(mx < nums[i]) mx = nums[i];
            prefixGcd.push_back(gcd(nums[i], mx));
        }

        long long ans = 0;
        sort(prefixGcd.begin(), prefixGcd.end());
            for (int i = 0; i < floor(prefixGcd.size() / 2.0); i++) {
                ans += gcd(prefixGcd[i],prefixGcd[prefixGcd.size()-1-i]);
            }

        return ans;
    }
};