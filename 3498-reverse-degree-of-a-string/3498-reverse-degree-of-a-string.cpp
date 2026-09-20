class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0,i=1;
        for(char c : s){
            ans += (27 - (c - 'a' + 1)) * i++;
        }
        return ans;
    }
};