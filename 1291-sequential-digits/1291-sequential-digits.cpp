class Solution {
public:
    void gen(int low,int high,vector<int>& ans,int num,int last){
        if(num > high) return;
        if(num >= low){
            ans.push_back(num);

        }
        if(last == 9) return;
        return gen(low,high,ans,num*10+(last+1),last+1);
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for(int i = 1 ; i<10;i++){
            gen(low,high,ans,i,i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};