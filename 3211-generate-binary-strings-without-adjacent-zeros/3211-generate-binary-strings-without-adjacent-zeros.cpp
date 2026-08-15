class Solution {
public:
    void solve(string curr, int remaining, vector<string>& ans) {
        if (remaining == 0) {
            ans.push_back(curr);
            return;
        }
        if (curr.empty() || curr.back() == '1') {
            solve(curr + "0", remaining - 1, ans);
        }
        solve(curr + "1", remaining - 1, ans);
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        string curr = "";
        solve(curr, n, ans);
        return ans;
    }
};