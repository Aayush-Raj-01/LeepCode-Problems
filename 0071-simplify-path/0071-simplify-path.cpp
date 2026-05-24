class Solution {
public:
    string simplifyPath(string path) {
        stack<string> value;
        string ans;
        string stored = "";
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/' ) {
                if (stored == ".."){
                    stored = "";
                    if(value.size() != 0)
                    value.pop();
                } else if (stored == "..." || stored == "....") {
                    value.push(stored);
                    stored = "";
                }else if(stored == ".") stored = "";
                 else if(stored != ""){
                    value.push(stored);
                    stored = "";
                }
            } else if(i == path.size()-1){
                stored += path[i];
                if (stored == ".."){
                    stored = "";
                    if(value.size() != 0)
                    value.pop();
                }else if(stored == ".") stored = "";
                else{
                value.push(stored);
                }
            }
            else {
                stored += path[i];
            }
            
        }
        int n = value.size();
        if(n == 0) ans = '/';
        for(int i = 0 ; i < n ; i++){
            ans = "/" + value.top() + ans;
            value.pop();
        }
        return ans;
    }
};