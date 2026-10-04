class Solution {
public:
    bool checkValidString(string s) {
        int max = 0 , min = 0;
        for(char c : s){
            if(c == '('){
                min += 1;
                max += 1;
            }else if(c == ')'){
                min -= 1;
                max -= 1;
                
            }else{
                min -= 1;
                max += 1;
            }

            if(min < 0) min = 0;
            if(max < 0) return false;
        }
        return min == 0 ? true: false;
        
    }
};