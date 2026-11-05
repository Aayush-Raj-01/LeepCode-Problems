class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0 ;
        bool check = true;
        for(int i : arr1){
            for(int j : arr2){
                if(abs(i - j) <= d) check = false ;
            }
            if(check) ans++;
            check = true;
        }
        return ans;
        
    }
};