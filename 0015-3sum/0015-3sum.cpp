class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int temp = nums[i] + nums[left] + nums[right];
                if (temp == 0) {
                    st.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                } else if (temp < 0) {
                    left++;
                } else if (temp > 0) {
                    right--;
                }
            }
        }
        return vector<vector<int>>(st.begin(), st.end());;
    }
};