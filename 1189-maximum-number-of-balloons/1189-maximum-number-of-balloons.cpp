class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> cnt(26, 0);

        for (char c : text) {
            cnt[c - 97]++;
        }

        return min({
            cnt['b' - 97],
            cnt['a' - 97],
            cnt['l' - 97] / 2,
            cnt['o' - 97] / 2,
            cnt['n' - 97]
        });
    }
};