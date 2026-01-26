class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int can1 =0 ,can2 = 0 , count1=0,count2=0;
        for(int i = 0; i<nums.size();i++){
            if(can2==nums[i]){
                count2++;
            }         
            else if(nums[i]==can1){
                count1++;
            }
            else if(count1==0){
                can1=nums[i];
                count1++;
            }
            else if(count2 ==0){
                can2=nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }

        }
        count1=0;
        count2=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==can1) count1++;
            if(nums[i]==can2) count2++;
        }  
        vector<int> ans;
        int n = nums.size()/3;
        if(count1>n) ans.push_back(can1);  
        if(can1!=can2) { 
        if(count2>n){
         ans.push_back(can2);   
        }}
        return ans; 
    }
};