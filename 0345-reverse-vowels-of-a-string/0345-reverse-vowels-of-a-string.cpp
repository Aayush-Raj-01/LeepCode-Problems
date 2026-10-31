class Solution {
public:
    string reverseVowels(string s) {
        int l = 0 , r = s.size()-1;
        while(l<r){
            if(tolower(s[l]) != 'a' && tolower(s[l]) != 'e' && tolower(s[l]) != 'i' && tolower(s[l]) != 'o' && tolower(s[l]) != 'u'){
                l++;
            }
            else if(tolower(s[r]) != 'a' && tolower(s[r]) != 'e' && tolower(s[r]) != 'i' && tolower(s[r]) != 'o' && tolower(s[r]) != 'u'){
                r--;
            }else{
                char c = s[l];
                s[l] = s[r];
                s[r] = c;
                r--;
                l++;
            }

        }
        return s;
        
    }
};