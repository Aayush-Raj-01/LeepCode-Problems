class Solution {
public:
    bool isValid(string s) {
        vector<int> count(3,0);
        vector<int> lastOpen(s.size(),0);
        int place =0;
        for(int i=0 ; i< s.size();i++){
            if(s[i]=='('){
                count[0]++;
                lastOpen[place++]= '(';
            }
            else if(s[i]=='{'){
                count[1]++;
                lastOpen[place++]= '{';
            }
            else if(s[i]=='['){
                count[2]++;
                lastOpen[place++]= '[';
            }
            else if(s[i]==')'){
                if(lastOpen[place-1] == '('){
                    count[0]--;
                    place--;
                }else{
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(lastOpen[place-1] == '{'){
                    count[1]--;
                     place--;
                }else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(lastOpen[place-1] == '['){
                    count[2]--;
                    place--;
                }else{
                    return false;
                }
            }
        }
        if(count[0]==0 && count[1]==0 && count[2]==0){
            return true;
        }else{
            return false;
        }
    }
};