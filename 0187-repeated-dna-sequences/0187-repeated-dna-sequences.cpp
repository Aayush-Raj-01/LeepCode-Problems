class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        unordered_set<string> seen;
        unordered_set<string> added;
        for(int i = 9 ; i < s.size(); i++){
            int l = i-9 , r = i; 
            string sub = s.substr(l, r - l + 1);
            if(!seen.count(sub)) seen.insert(sub);
            else{
                if(!added.count(sub)){
                    added.insert(sub);
                    ans.push_back(sub);
                }

            }
        }
        return ans;
        
    }
};