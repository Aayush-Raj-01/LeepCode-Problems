class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans ="";
        for(char c:s){
            if(c == ')'){
                st.pop();
                if(!st.empty()){
                    ans += ")";
                }
            }
            else if(c == '('){
                st.push(c);
                if(st.size() != 1){
                    ans += "(";
                }
            }
        }
        return ans;
    }
};