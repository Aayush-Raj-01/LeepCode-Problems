class Solution {
public:
    string reverseStr(string s, int k) {
        if(k > s.size()){
            reverse(s.begin(),s.end());
            return s;
        }
        string ans = "";
        int i =0;
        for(i = 0 ; i < s.size() ; i+=k+k){
            string temp = s.substr(i,k);
            reverse(temp.begin(),temp.end());
            ans+= temp;
            if (i + k < s.size()) {
                temp = s.substr(i + k, k);
                ans += temp;
            }

        }

        return ans;
        
    }
};