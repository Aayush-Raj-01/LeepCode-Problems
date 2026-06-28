class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        if (arr[0] != 1) {
            for (int& x : arr) {
                if (x == 1) {
                    x = arr[0];
                    arr[0] = 1;
                }
            }
        }
        sort(arr.begin(), arr.end());
        if (arr[0] != 1) {
            arr[0] = 1;
        }
        for (int i = 1; i < arr.size(); i++) { 
            if (arr[i - 1] < arr[i])
                arr[i] = arr[i - 1] + 1;
        }
        return arr[arr.size()-1];
    }
};