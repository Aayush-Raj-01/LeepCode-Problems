class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
    int e=0,s=0;
    long int mid =0;
    e=x;
    mid = e/2;
    while(s<e){
        if(mid*mid<=x){
            s = mid+1;
        }
        else{
            e = mid;
            
        }
        mid = s + (e-s)/2;

    }
    return s-1;
    }
};
