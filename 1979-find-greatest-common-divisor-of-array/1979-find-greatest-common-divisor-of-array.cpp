class Solution {
public:
    int findGCD(vector<int>& nums) {
        // lazy to write a for loop
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums[nums.size()-1]);
    }
};