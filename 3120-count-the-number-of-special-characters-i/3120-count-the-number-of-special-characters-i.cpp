class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> count(125,0);
        int ans = 0;
        for(int i = 0 ; i < word.size() ; i++){
            if(word[i] < 92){
                count[word[i]] = 1;
            }
            if(word[i] > 93)
            count[word[i]]=1;

        }
        for(int i = 65; i < 91; i++){
            if(count[i] == 1){
                if(count[i+32] == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};