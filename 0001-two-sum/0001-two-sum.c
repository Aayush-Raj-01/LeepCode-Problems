/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int a[numsSize],i,j,size;
    int *b = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    
    for(int i = 0; i < numsSize; i++) {
        a[i] = nums[i];
    }
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            
            if(target == (a[i]+a[j])){
                b[0] = i;
                b[1] = j;
                break;
            }
        }
    }
    return b;
}