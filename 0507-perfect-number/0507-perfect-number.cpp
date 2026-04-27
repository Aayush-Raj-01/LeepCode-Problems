class Solution {
public:
    bool checkPerfectNumber(int num) {
        int dvd,sum=0,i=1;
        vector<int> sq;
        while(num/2 >= i){
            dvd = num%i;
            if(dvd == 0){
                sq.push_back(i);
            }
            i++;
        }
        for(int j=0; j<sq.size();j++){
            sum += sq[j];
        }
        if(sum == num) return true;
        return false;
        
    }
};