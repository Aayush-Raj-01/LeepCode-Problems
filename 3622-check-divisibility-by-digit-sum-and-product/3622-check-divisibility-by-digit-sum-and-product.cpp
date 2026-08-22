class Solution {
public:
    bool checkDivisibility(int n) {
        // digit sum
        int s = n,sum=0,product=1;
        while(s){
            sum+= s%10;
            s = s /10;
        }
        // digit Product
        s =n;
        while(s){
            product *= s%10;
            s = s /10;
        }
        return !(n % (sum+product));
    }
};