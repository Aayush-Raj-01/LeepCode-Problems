class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int mx = *max_element(costs.begin(), costs.end());

        vector<int> cnt(mx + 1, 0);

        for(int x : costs){
            cnt[x]++;
        }
        int ans =0;
        for(int i = 0 ; i <= mx ; i++){
            while(cnt[i] && i <= coins){
                coins -= i;
                ans++;
                cnt[i]--;
                
            }
        }
        return ans;
    }
};