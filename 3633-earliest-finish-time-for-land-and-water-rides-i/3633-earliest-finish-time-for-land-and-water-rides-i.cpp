class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = 0,ans2=0,temp =0;
        int min = INT_MAX;
        for(int i = 0 ; i < landStartTime.size() ;i++){
            ans = landStartTime[i]  + landDuration[i];
            for(int j = 0 ; j < waterStartTime.size() ; j++){
                if(waterStartTime[j] > ans) temp = waterStartTime[j] - ans;
                ans2 = ans + temp + waterDuration[j];
                temp =0;
                if(min > ans2){
                    min = ans2;
                }
            }

        }
        

        for(int i = 0 ; i < waterStartTime.size() ;i++){
            ans = waterStartTime[i]  + waterDuration[i];
            for(int j = 0 ; j < landStartTime.size() ; j++){
                if(landStartTime[j] > ans) temp = landStartTime[j] - ans;
                ans2 = ans + temp + landDuration[j];
                temp =0;
                if(min > ans2){
                    min = ans2;
                }
            }

        }
        return min;
        
    }
};