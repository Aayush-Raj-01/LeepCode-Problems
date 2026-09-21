class Solution {
public:
    bool isHappy(int n) {
        int ans = n;
        while(true){
            n = ans;
            ans = 0;
            int temp;
            while(n){
                temp = n%10;
                ans += temp*temp;
                n = n/10;
            }
            if(ans == 1 || ans < 6) break;
        }
        return ans == 1 ? true : false;
    }
};