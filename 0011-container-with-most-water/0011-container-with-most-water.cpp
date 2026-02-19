class Solution {
public:
    int maxArea(vector<int>& height) {
        int k = 0 , p = height.size()-1,area=0,max=0;
        while(k<p){
            area= height[k]>height[p] ? (p-k)*height[p] : (p-k)*height[k];
            if(area > max){
                max = area;
            }
            if(height[k] > height[p]){
                p--;
            }
            else{
                k++;
            }
        }
        return max;
    }
};