class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr){
        vector<int> freq(arr.size() + 1,0);
        for(int i = 0 ; i < arr.size() ; i++){
            int value = min(arr[i], (int)arr.size()) ;
            freq[value]++;
        }
        int mx = 0;
        for (int i = 1; i < freq.size(); i++) { 
                while(mx < i && freq[i] != 0){
                    mx++;
                    freq[i]--;
                }
        }
        return mx;
    }
};