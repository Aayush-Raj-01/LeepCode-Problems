class Solution {
public:
    int bulbSwitch(int n) {
        // vector<bool> bulb(n,false);
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = i ; j < n ; j+=i+1){
        //         if(bulb[j]) bulb[j] = false;
        //         else bulb[j] = true;
        //     }
        // }
        // int ans = 0;
        // for(int i = 0 ; i < n ; i++){
        //     if(bulb[i])ans++;
        // }
        // return ans;

        //   OR
        return sqrt(n);
    }
};