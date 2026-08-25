class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        for(int i = 1 ; i <= nums.size()+1;i++){
            s.insert(k*i);
        }
        for(int i =0 ; i < nums.size();i++){
            if(s.count(nums[i])) s.erase(nums[i]);
        }
        return *s.begin();
    }
};