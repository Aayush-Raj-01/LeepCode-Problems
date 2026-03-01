class Solution {
public:
    int trap(vector<int>& height) {
        int left =0 , right = height.size()-1,water=0,leftmax=0,rightmax=0;
        while(left-right){
            if(height[left] <= height[right]){
                leftmax = max(leftmax,height[left]);
                water += leftmax - height[left];
                left++;
            }
            if(height[left] > height[right]){
                rightmax = max(rightmax,height[right]);
                water += rightmax - height[right];
                right--;
            }
        }
        return water;
        
    }
};