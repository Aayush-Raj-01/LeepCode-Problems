class Solution {
public:
    int findGCD(vector<int>& nums) {
        // lazy to write a for loop
        // sort(nums.begin(),nums.end());
        return gcd(*max_element(nums.begin(), nums.end()),*min_element(nums.begin(), nums.end()));
    }
};