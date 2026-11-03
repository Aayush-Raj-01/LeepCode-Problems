class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0;
        int larg = max_element(nums.begin() , nums.end()) - nums.begin();

        for(int i : nums){
            moves += nums[larg] - i;
        }
        return moves;
        
    }
};