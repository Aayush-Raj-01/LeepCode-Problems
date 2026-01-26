class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merg;
        int i =0,j=0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i]<nums2[j]){
                merg.push_back(nums1[i]);
                i++;
            }
            else{
                merg.push_back(nums2[j]);
                j++;
            }
        }
        while(i< nums1.size()){
            merg.push_back(nums1[i]);
            i++;
        }
        while(j< nums2.size()){
            merg.push_back(nums2[j]);
            j++;
        }
        if(merg.size()%2!=0){
            double ans = merg[merg.size()/2];
            return ans;
        }
        else{
            double ans = merg[merg.size()/2];
            ans = (ans + merg[(merg.size()/2)-1])/2;
            return ans;
        }
        

        
    }
};