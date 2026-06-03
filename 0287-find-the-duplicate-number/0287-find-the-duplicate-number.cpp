class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> check(nums.size(),0);
        for(int i = 0 ; i < nums.size();i++){
            check[nums[i]]++;
            if(check[nums[i]] == 2) return nums[i];
        }
        return 0;
        
    }
};