#include <iterator>
class Solution {
public:
    int hIndex(vector<int>& citations) {
        vector<int> freq(citations.size()+1,0);
        for(int i =0;i<citations.size()-1;i++){
            for(int j =i+1;j<citations.size();j++){
                if(citations[j]>citations[i]){
                    int temp = citations[j];
                    citations[j] = citations[i];
                    citations[i]=temp;
                }
            }
        }
        int ans;
        for(int i =0;i<citations.size();i++){
            if(citations[i]<=i){
                ans = i;
                break;
            }
        }
        return ans;
    }
};