class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        bool duplicate1 = false;
        bool duplicate2 = false;
        int j = 2;
        if(k==nums.size()){
            int max = nums[0];
            for(int i = 1; i < nums.size() ; i++){
                if(max < nums[i]) max = nums[i];
            }
            return max;
        }
        else if(k==1){
            unordered_map<int,int> feq;
            int max = -1;
            for(int i : nums){
                feq[i]++;
            }
            for(int i : nums){
                if(max < i && feq[i] < 2) max = i;
            }
            return max;
        }
        else {
            for (int i = 1; i < nums.size(); i++) {
                if (nums[0] == nums[i]) {
                    duplicate1 = true;
                }
            }
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[nums.size() - 1] == nums[i]) {
                    duplicate2 = true;
                }
            }
            if (!duplicate1 && !duplicate2) {
                return nums[0] > nums[nums.size() - 1] ? nums[0]
                                                       : nums[nums.size() - 1];
            } else if (!duplicate1)
                return nums[0];
            else if (!duplicate2)
                return nums[nums.size() - 1];
        }
        return -1;
    }
};