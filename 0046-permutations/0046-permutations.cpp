class Solution {
public:
    vector<vector<int>> ans;
    void permute(int idx , vector<int>& nums){
        if(idx == nums.size()){
            ans.push_back(nums);
        }
        for(int i = idx; i < nums.size();i++){
            swap(nums[i],nums[idx]);
            permute(idx+1,nums);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permute(0,nums);
        return ans;
        
    }
};