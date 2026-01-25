#include <unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int> map;
       for(int i = 0;i<nums.size();i++){
        map[nums[i]]++;
       }
       for(auto& pair : map){
        if(pair.second > nums.size()/2)
        return pair.first;
       }
       return -1;

    }
};