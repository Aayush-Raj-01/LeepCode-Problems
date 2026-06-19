class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int cal = 0,max = INT_MIN;
        for(int i = 0 ; i < gain.size() ; i++){
            cal += gain[i];
            if(cal > max) max = cal;
        }
        if(max < 0) max = 0;
        return max;
        
    }
};