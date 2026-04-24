class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,wild=0,ans;
        for(int i =0 ; i<moves.size() ; i++){
            if(moves[i]=='L')
            l++;
            else if(moves[i]=='R')
            r++;
            else if(moves[i]=='_')
            wild++;
        }
        if(l>r)
        ans = l+wild-r;
        else
        ans = r+wild-l;
        return ans;
    }
};