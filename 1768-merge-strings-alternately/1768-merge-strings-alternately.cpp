class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = max(word1.size(),word2.size());
        string ans="";
        int j =0;
        while(j < i){
            if(j < word1.size())  ans += word1[j];
            if(j < word2.size())  ans += word2[j];
            j++;
        }
        return ans;
        
    }
};