class Solution {
public:
    int maxLength(vector<int>& nums) {
        using ll = long long;

        int maxii = 0;
        for (int i = 0; i < nums.size(); i++) {
            ll prod = 1;
            ll g = nums[i];
            ll l = nums[i];
            for (int j = i; j < nums.size(); j++) {
                if(prod > LLONG_MAX / nums[j]) break; 
                prod *= nums[j];
                g = gcd(g, nums[j]);
                l = l / gcd(l, nums[j]);
                if(l > LLONG_MAX / nums[j]) break;
                l = l *nums[j];
                if (prod == g * l) {
                    maxii = maxii < j - i +1? j-i+1 : maxii;
                }
            }
        }
        return maxii;
    }
};