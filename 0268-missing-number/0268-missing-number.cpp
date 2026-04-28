class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> store(nums.size()+1, 0);
        for(int i = 0; i < nums.size(); i++) {
            store[nums[i]]++;
        }
        for(int i = 0; i < store.size(); i++) {
            if (store[i] == 0)
                return i;
        }
        return store.size();
    }
};