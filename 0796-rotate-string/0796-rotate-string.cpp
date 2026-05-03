class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        int k = 0;
        bool ans = false;
        s = s + s;
        for (int i = 0; i < s.size(); i++) {
            k=0;
            if (s[i] == goal[k]) {
                for (k = 0; k < goal.size(); k++) {
                    if(s[i+k]!=goal[k]){
                        break;
                    }
                    if (k == goal.size() - 1) {
                        ans = true;
                        break;
                    }
                }
            if (ans) {
                break;
            }
            }
        }
        return ans;
    }
};