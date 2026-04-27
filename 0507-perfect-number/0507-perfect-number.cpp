class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) return false;
        int dvd,sum=1,i=2;
        vector<int> sq;
        while(num >= i*i){
            dvd = num%i;
            if(dvd == 0){
               sum+=i;
               if(i!=num/i)sum+= num/i;
            }
            i++;
        }
        return sum==num;
        
    }
};