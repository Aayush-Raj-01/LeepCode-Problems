class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp = n;
        int multi = 1;
        while(true){
            multi = 1;
            while(temp != 0){
                int tn = temp%10;
                multi *= tn;
                temp = temp /10;
            }
            if(multi % t == 0){
                break;
            }
            n++;
            temp = n;
        }
        return n;
        
    }
};