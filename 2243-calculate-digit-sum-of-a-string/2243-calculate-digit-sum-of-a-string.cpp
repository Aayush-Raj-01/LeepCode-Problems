class Solution {
public:
    string digitSum(string s, int k) {
        string ans = s;
        while(ans.size() > k ){
            int round = 0;
            int num = 0;
            s="";
            for(char c : ans){
                if(round == k){
                    s += to_string(num);
                    round = 0;
                    num = 0;

                }
                    round++;
                    num += c - '0';
            }
            if(round != 0) s += to_string(num);
            
            ans = s;
            
        }
        return ans;
        
    }
};