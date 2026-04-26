class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans,sign=1;
        // if(dividend < 0 && divisor < 0) sign = -1;
        ans = (long long)dividend / (long long)divisor;
        // ans = ans* sign;
        if(ans>INT_MAX) return 2147483647;
        if(ans<INT_MIN) return -2147483648;
        return ans;
    }
};