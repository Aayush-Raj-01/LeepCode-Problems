class Solution {
public:
    bool isGood(vector<int>& nums) {
        int max = INT_MIN;
        for(int i =0; i < nums.size();i++){
            if(max < nums[i]) max = nums[i];
        }
        vector<int> check(max+1,0);
        sort(nums.begin(), nums.end());
        if(nums.size() != max + 1) return false;
        int check2=0;
        for(int i =0; i <= max;i++){
            if(nums[i] != max) check[nums[i]]++;
            else check2++;
            if(check[nums[i]] == 2 || check2 ==3) return false;
        }
        return true;
        
    }
};