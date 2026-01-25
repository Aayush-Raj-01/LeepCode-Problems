#include <unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int maj =nums[0],votes=1;
       for(int i=1;i <nums.size();i++){
        if(maj==nums[i]){
            votes++;
        }
        else if(votes==0){
            maj = nums[i];
            votes++;
        }
        else
        votes--;
       }
       return maj;
    }
};