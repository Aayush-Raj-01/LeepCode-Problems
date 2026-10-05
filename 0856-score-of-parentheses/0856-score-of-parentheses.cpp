class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        int dept = 0 ;
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == '('){
                dept++;
            }else{
                dept--;
                if(s[i-1] == '('){
                    score += 1 << dept;
                }
            }
        }
        return score;
        
    }
};