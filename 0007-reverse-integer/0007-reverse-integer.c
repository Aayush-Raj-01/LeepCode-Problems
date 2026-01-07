#include <limits.h>
int reverse(int x){
    int yx=0,re=0,n=0;
  
    while(x!=0){
        n = x%10;
        if(yx==0){
            if(n==0)
            x = x/10;
        }
        else{
            if(re>INT_MAX/10 || re <INT_MIN/10){
                return 0;
            }

            re = n + re*10;
            x = x/10;
        }
        yx++;
    }
    return re;



}