#include <algorithm>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a1,a2;
        
        auto g = find(nums.begin(),nums.end(),target);
        if(g!=nums.end()){
            a1 = distance(nums.begin(),g);
            auto f = find(nums.rbegin(),nums.rend(),target);
            if(f!=nums.rend()){
            a2 = nums.size() - 1 - distance(nums.rbegin(),f);

            }
        }
        else{
            return {-1,-1};
        }
        return {a1,a2};
        
    }
};