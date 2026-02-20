class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.empty()) return {};
        int initial = nums[0];
        string ans;
        vector<string> anss;
        if(nums.size() == 1){
            anss.push_back(to_string(nums[0]));
            return anss;
        }
        for(int i=0;i<nums.size();i++){
            if(i != nums.size()-1 && nums[i]+1==nums[i+1] ){
                continue;
            }
            else if(nums[i]+1 !=nums[i+1] || i == nums.size()-1){
                if(nums[i]!=initial)
                ans = to_string(initial) + "->" + to_string(nums[i]);
                else
                ans = to_string(initial);
                anss.push_back(ans);
            }
             if(i+1 < (int)nums.size())   
              initial = nums[i+1];

        }
        return anss;
    }
};