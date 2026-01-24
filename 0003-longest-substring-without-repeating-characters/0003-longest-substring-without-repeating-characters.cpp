class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int end =0,start=0,ans=0,large =0;
        for(int i =0;i<s.size();i++){
            start = i;
            int alp[256]={0};
            for(int j =i;j<=s.size();j++){
                if(alp[s[j]]!=0){
                    end =j;
                    break;
            }
            else if(alp[s[j]]==0){
                alp[s[j]]++;
            }
            if(s[j]=='\0'){
                end = j;
            }
            
            }
            ans = end-start;

            if(ans>large) large = ans;
          }
        
      return large;    
    }

};