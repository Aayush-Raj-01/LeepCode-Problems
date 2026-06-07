class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left(nums.size() , 0);
        vector<int> right(nums.size() , 0);
        int store = 0;
        for(int i =0 ; i < nums.size() ; i++){
            left[i] = store;
            store += nums[i];
        }
        store = 0;
        for(int i =nums.size()-1 ; i >= 0 ; i--){
            right[i] = store;
            store += nums[i];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            int temp = left[i] - right[i];
            if(temp < 0){
                temp = -1 * temp;
            }
            left[i] = temp;
        }
        return left;

        
    }
};