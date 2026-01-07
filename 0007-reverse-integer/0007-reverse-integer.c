#include <limits.h>
int reverse(int x){
    int y=0,yx=0,re=0,n=0;
    if(x<0){
        if(x==INT_MIN){
            return 0;
        }
        x = x * -1;
        y++;
    }
    while(x>0){
        n = x%10;
        if(yx==0){
            if(n==0)
            x = x/10;
        }
        else{
            if(re>INT_MAX/10){
                return 0;
            }

            re = n + re*10;
            x = x/10;
        }
        yx++;
    }
    return y ==1 ? -re : re;



}