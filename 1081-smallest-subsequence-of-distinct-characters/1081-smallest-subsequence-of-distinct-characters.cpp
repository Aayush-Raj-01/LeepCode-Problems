class Solution {
public:
    string smallestSubsequence(string s) {
        vector<bool> vist(26,false);
        stack<char> st;
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            char c = s[i];
            if(!vist[c - 'a']){
                while(!st.empty() && st.top() > c){
                    bool check = false;
                    for(int j = i+1 ; j < s.size(); j++){
                        if(st.top() == s[j]){
                            check = true;
                            break;
                        }
                    }
                    if(check){
                        vist[st.top() - 'a'] = false;
                        st.pop();
                    }else break;
                }
                st.push(s[i]);
                vist[c - 'a'] = true;
            }
        }
        while(!st.empty()){
            ans = st.top() +  ans;
            st.pop();
        }
        return ans;
        
    }
};