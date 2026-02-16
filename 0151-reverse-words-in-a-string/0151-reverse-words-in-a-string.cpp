class Solution {
public:
    string reverseWords(string s) {
        string temp,ans;
        int a =0;
        for(int i = s.size()-1; i >=0;i--){
            if(s[i]!=' '){
                temp = s[i] + temp;
                if(a){
                    ans += ' ';
                    a=0;
                }
            }if(s[i]==' ' && s[i+1] != ' ' && i!=s.size()-1){
                ans += temp;
                temp = "";
                a=1;
            }
            // else if(s[i]!=' ' && i+1==0 && a==0){
            //     ans += temp;
            // }
            if(i==0 && s[i] != ' '){
                ans += temp;
                
            }

        }
        return ans;
    }
};