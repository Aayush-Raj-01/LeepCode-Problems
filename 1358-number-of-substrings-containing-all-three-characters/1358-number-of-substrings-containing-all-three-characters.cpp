class Solution {
public:
    int numberOfSubstrings(string s) {
        int r = 0, l = 0, a = 0, b = 0, c = 0;
        int ans = 0;
        while (true) {
                if (a != 0 && b != 0 && c != 0) {
                    ans+=s.size()-r+1;
                    if(s[l]=='a'){
                        l++;
                        a--;
                    }
                    else if(s[l]=='b'){
                        l++;
                        b--;
                    }
                    else if(s[l]=='c'){
                        l++;
                        c--;
                    }
                }
                else if (r!=s.size() && s[r] == 'a') {
                    a++;
                    r++;
                } else if (r!=s.size() && s[r] == 'b') {
                    b++;
                    r++;
                } else if (r!=s.size() && s[r] == 'c') {
                    c++;
                    r++;
                }else break;
        }
        return ans;
    }
};