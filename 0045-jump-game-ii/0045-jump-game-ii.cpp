class Solution {
public:
    int jump(vector<int>& nums) {

        int numSize = nums.size();
            if(numSize <= 1) {
        return 0;
    }
    
    int jumps = 0;
    int CurrentEnd = 0;
    int next = 0;
    
    for(int i = 0; i < numSize - 1; i++) {
        next = max(next, i + nums[i]);
        
        if(i == CurrentEnd) {
            jumps++;
            CurrentEnd = next;
            
            if(CurrentEnd >= numSize - 1) {
                break;
            }
        }
    }
    
    return jumps;
    }
};  