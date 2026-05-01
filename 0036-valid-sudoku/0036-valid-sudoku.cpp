class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            vector<int> count(10, 0);
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    count[board[i][j] - '0']++;
                    if (count[board[i][j] - '0'] == 2)
                        return false;
                }
            }
        }
        for (int i = 0; i < 9; i++) {
            vector<int> count(10, 0);
            for (int j = 0; j < 9; j++) {
                if (board[j][i] != '.') {
                    count[board[j][i] - '0']++;
                    if (count[board[j][i] - '0'] == 2)
                        return false;
                }
            }
        }
        int sum = 0;
        for (int l = 0; l < 9; l += 3) {
            for (int k = 0; k < 9; k += 3) {
                vector<int> count(10, 0);
                for (int i = l+0; i < l + 3; i++) {
                    for (int j = k + 0; j < k + 3; j++) {
                        if (board[i][j] != '.') {
                            count[board[i][j] - '0']++;
                            if (count[board[i][j] - '0'] == 2)
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};