class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size() != s.size()) return false;
        vector<int> data(100,0);
        for(int i =0 ; i < t.size();i++){
            data[t[i] -'0']++;
        }
        for(int i =0 ; i<s.size();i++){
            if(data[s[i] -'0'] != 0){
                data[s[i] -'0']--;
            }
            else return false;
        }
        return true;
    }
};