
class Solution {
public:
    int arrangeCoins(int n) {
        int a = 0;
        long long ans = 0;

        while (ans < n) {
            a++;
            ans += a;
        }

        if (ans > n) {
            return a - 1;
        }

        return a;
    }
};
