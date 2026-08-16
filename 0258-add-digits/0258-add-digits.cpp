class Solution {
public:
    int addDigits(int num) {
        int ans=num;
        int n = ans;
        while(n > 9){
            ans =0;
            while(n){
                ans += n%10;
                n = n/10;
            }
            n = ans;
        }
        return ans;
        
    }
};