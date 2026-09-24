class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int min = INT_MAX;
        int index = 0;
        for(int i : nums){
            int temp = 0;
            while(i != 0){
                temp += i % 10;
                i /= 10;
            }
            if(index++ == temp){
                min = min < temp ? min : temp;
            }
        }
        return min == INT_MAX ? -1 : min ;
        
    }
};