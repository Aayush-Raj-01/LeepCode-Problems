class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        set<int> s(nums1.begin(), nums1.end());

        vector<int> result(s.begin(), s.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (result[i] == nums2[j]) {
                    ans.push_back(result[i]);
                    break;
                }
            }
        }
        return ans;
    }
};