class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i = nums.size()-1 ; i>=0 ; i--){
            while(nums[i]){
                int temp = nums[i] % 10;
                nums[i] /= 10;
                ans.push_back(temp);
            }
        }
        for(int i = 0 ; i < ans.size()/2;i++){
            int temp = ans[i];
            ans[i] = ans[ans.size()-1-i];
            ans[ans.size()-1-i] = temp;
        }
        return ans;
    }
};