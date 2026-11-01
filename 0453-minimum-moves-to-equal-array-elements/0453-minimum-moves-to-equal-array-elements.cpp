class Solution {
public:
//     bool check(vector<int>& nums){
//         for(int i = 0 ; i < nums.size() -1 ; i++){
//             if(nums[i] != nums [i+1]) return false;
//         }
//         return true;
//     }
    int minMoves(vector<int>& nums) {
        int move = 0; 
        int sum =0;
        int small = nums[0];
        for(int i: nums){
            if(i < small) small = i;
            sum += i;
          }
        return move = sum - (nums.size() * small);
    }
};