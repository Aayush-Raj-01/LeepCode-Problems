class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            unordered_map<int,int> store;
            for(int j = i ; j < nums.size();j++){
                store.insert({nums[j],1});
                ans+= store.size() * store.size();
            }
        }
        return ans;
    }
};