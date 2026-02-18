class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,k=numbers.size()-1;
        while(i<k){
            if(numbers[i]+numbers[k] == target){
                i+=1;
                k+=1;
                break;
            }
            if(numbers[i]+numbers[k] > target){
                k--;
            }
            if(numbers[i]+numbers[k] < target){
                i++;
            }
        }
        vector<int> ans;
        ans.push_back(i);
        ans.push_back(k);
        return ans;
        
    }
};