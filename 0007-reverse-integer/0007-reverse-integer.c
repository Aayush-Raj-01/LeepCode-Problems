#include <limits.h>
int reverse(int x){
    int re=0,n;
  
    while(x!=0){
        n = x%10;
      
            if(re>INT_MAX/10 || re <INT_MIN/10){
                return 0;
            }

            re = n + re*10;
            x = x/10;
       
    }
    return re;



}