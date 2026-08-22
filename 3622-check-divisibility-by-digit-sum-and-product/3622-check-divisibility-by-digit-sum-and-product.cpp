class Solution {
public:
    bool checkDivisibility(int n) {
        int s = n,sum=0,product=1;
        while(s){
            sum+= s%10;
            product *= s%10;
            s = s /10;
        }
        return !(n % (sum+product));
    }
};