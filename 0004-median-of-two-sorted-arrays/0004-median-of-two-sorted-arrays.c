#include<math.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int *n1 , *n2;
    int i,n=0,m=0,t1,t2,j,c=0;
    double ab=0,sum=0;
    n = nums1Size + nums2Size;
    int a[n];
    n1 = nums1;
    n2 = nums2;
    for(i=0;i<nums1Size;i++){
        a[i]=*n1;
        n1++;
        m++;
    }
    for(i=m;i<m+nums2Size;i++){
        a[i]=*n2;
        n2++;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    if(n%2!=0){
    ab = a[n/2];
    }
    else{
        sum = a[(n/2)-1] + a[((n+2)/2)-1];
        ab = sum/2;
    }
    return ab;
}