class Solution {
public:
    int rotatedDigits(int n) {
        int ans=0;
        for(int i =1; i <= n ; i++){
            int num = i,number=0;
            bool rotate= false;
            int j=1;
            while(num >0){
                int numb = num%10;
                num = num /10;
                if(numb == 3 || numb == 4 || numb == 7){
                    rotate = false;
                    break;
                }else if(numb == 5){
                    number = number + j * 2;
                }else if(numb == 2){
                    number = number + j * 5;
                }else if(numb == 0 || numb == 1 || numb == 8){
                    number = number + j * numb;
                }else if(numb == 6){
                    number = number + j * 9;
                }else if(numb == 9){
                    number = number + j * 6;
                }
                j *= 10;
                rotate = true;
            }
            if(rotate){
                if(number != i){
                    ans++;
                }
            }
        }
        return ans;
        
    }
};