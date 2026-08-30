class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int chota = INT_MAX;
        int chotaindex = 0;
        int bada = INT_MIN;
        int badaindex = 0;
        int n = (int)nums.size();
        for (int i = 0; i < n; i++) {
            if (chota > nums[i]) {
                chota = nums[i];
                chotaindex = i;
            }
            if (bada < nums[i]) {
                bada = nums[i];
                badaindex = i;
            }
        }
        int left = max(chotaindex, badaindex) + 1;
        int right = n - min(chotaindex, badaindex);
        int both = chotaindex + 1 + (n - badaindex);
        int both2 = badaindex + 1 + (n - chotaindex);
        return min({left, right, both, both2});
    }
};