class Solution {
public:
    int minAddToMakeValid(string s) {
        int fix = 0;
        stack<int> st;
        for(char c: s){
            if(c == '('){
                st.push(c);
            }else{
                if(!st.empty()){
                    st.pop();
                }else{
                    fix++;
                }
            }
        }
        while(!st.empty()){
            fix++;
            st.pop();
        }
        return fix;
        
    }
};