class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        std::string ans="";
        ans = strs[0];
        for(int i = 0 ; i<strs.size(); i++){
            std::string temp = "";
            for(int j = 0 ; j < strs[i].size() ; j++){
                    if(ans[j]==strs[i][j]){
                        temp += strs[i][j];
                    }
                    else break;
            }
            ans = temp;
        }
        return ans;
        
    }
};