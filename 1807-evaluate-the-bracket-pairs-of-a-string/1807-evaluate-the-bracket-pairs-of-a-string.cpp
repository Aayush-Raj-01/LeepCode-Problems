class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string key = "";
        string ans = "";
        bool inkey = false;
        unordered_map<string,string> value;
        for(int i = 0 ; i < knowledge.size() ; i++){
            value[knowledge[i][0]] = knowledge[i][1];
        }
        for(char c : s){
            if(c == ')'){
                inkey = false;
                if(value.find(key) != value.end()) ans += value[key];
                else ans += '?';
                key = "";
            }
            else if(c == '('){
                inkey = true;
            }else if(inkey){
                key += c;
            }
            else{
                ans+=c;
            }
        }
        return ans;
    }
};