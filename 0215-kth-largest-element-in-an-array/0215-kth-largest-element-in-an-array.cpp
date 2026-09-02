class Solution {
public:
    int partition(vector<int>& nums, int low, int high) {
    int randomIndex = low + rand() % (high - low + 1);
    swap(nums[randomIndex], nums[high]);

    int pivot = nums[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (nums[j] < pivot) {
            i++;
            swap(nums[i], nums[j]);
        }
    }

    swap(nums[i + 1], nums[high]);
    return i + 1;
}
    void quicksort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pi = partition(nums, low, high);
            quicksort(nums, low, pi - 1);
            quicksort(nums, pi+1, high);
        }
    }
    // vector<int> remove_duplicates(vector<int>& nums) {
    //     vector<int> ans;
    //     ans.push_back(nums[0]);
    //     for (int i = 1; i < nums.size(); i++) {
    //         if (nums[i] != nums[i - 1]) {
    //             ans.push_back(nums[i]);
    //         }
    //     }
    //     return ans;
    // }
    int findKthLargest(vector<int>& nums, int k) {
        quicksort(nums, 0, nums.size() - 1);
        return nums[nums.size() - k];
    }
};