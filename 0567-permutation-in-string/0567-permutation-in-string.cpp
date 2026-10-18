class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> st;
        unordered_map<char, int> cpst;
        for (char c : s1) {
            st[c]++;
        }
        int l = 0, r = 0;
        while (r < s2.size()) {
            cpst[s2[r]]++;
            if (r - l + 1 > s1.size()) {
                cpst[s2[l]]--;
                if (cpst[s2[l]] == 0)
                    cpst.erase(s2[l]);
                l++;
            }
            if (st == cpst)
                return true;
            r++;
        }
        return false;
    }
};