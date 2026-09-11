class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        for(int i : nums){
            if(i==0){
                max = max > count ? max : count;
                count = 0;
            }else{
                count++;
            }
        }
        max = max > count ? max : count;
        return max;
    }
};