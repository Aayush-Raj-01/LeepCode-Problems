class Solution {
public:
    void merge(vector<int>& arr ,int l,int m , int r){
        int n1 = m -l + 1;
        int n2 = r - m;
        vector<int> la,ra ;
        for(int i = 0;i<n1;i++){
            la.push_back(arr[l+i]);
        }
        for(int i = 0;i<n2;i++){
            ra.push_back(arr[m + 1 + i]);
        }
        int i = 0,j=0,k=l;
        while(i < n1 && j <n2 ){
            if(la[i] <= ra[j]){
                arr[k] = la[i];
                i++;
            }else{
                arr[k] = ra[j];
                j++;
            }
            k++;
        }
        while(i < n1){
            arr[k] = la[i];
            i++;
            k++;
        }
        while(j < n2){
            arr[k] = ra[j];
            j++;
            k++;
        }
    }
    
    void mergeSort(vector<int>& arr, int l, int r){
        if(l >= r) return;

        int m = l + (r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size() -1);
        return nums;
        
    }
};