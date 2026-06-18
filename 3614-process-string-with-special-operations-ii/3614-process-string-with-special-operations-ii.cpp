class Solution {
public:
    char processStr(string s, long long k) {
        long long length=0;
        for(int i = 0 ; i < s.size() ;i++){
            if(s[i]=='#' && length!=0){
                length+=length;
            }
            else if(s[i]=='*' && length!=0){
                length -= 1;
            }
            else if(s[i] != '#' && s[i]!='*' && s[i]!='%' ){
                length += 1;
            }
        }
        if(k>=length) return '.';
        for(int i = s.size()-1 ; i >= 0 ;i--){
            if(s[i]=='#' && length!=0){
                length /= 2;
                if(length<=k){
                   k = k - length;
                }
            }
            else if(s[i]=='%' && length!=0){
                k = length - k-1;
            }
            else if(s[i]=='*' && length!=0){
                length += 1;
            }
            else if(s[i] != '#' && s[i]!='*' && s[i]!='%' ){
                if(k == length -1) return s[i];
                length--;
            }
        }
        return '.';
        
        
    }
};