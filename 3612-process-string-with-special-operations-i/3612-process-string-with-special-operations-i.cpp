class Solution {
public:
    string processStr(string s) {
        string result;
        for(int i = 0 ; i < s.size() ;i++){
            if(s[i]=='%' && result!=""){
                reverse(result.begin(),result.end());
            }
            else if(s[i]=='#' && result!=""){
                result+=result;
            }
            else if(s[i]=='*' && result!=""){
                result.pop_back();
            }
            else if(s[i] != '#' && s[i]!='*' && s[i]!='%' ){
                result += s[i];
            }
        }
        return result;
        
    }
};