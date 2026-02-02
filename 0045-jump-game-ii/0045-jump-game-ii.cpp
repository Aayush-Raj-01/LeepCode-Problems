class Solution {
public:
    int jump(vector<int>& nums) {
        int end=0,far=0,small=0;
        for(int i =0;i<nums.size();i++){
            far = max(far,i+nums[i]);
            if(i==end){
                small +=1;
                end=far;
            }
        }
        return small-1;
    }
};  