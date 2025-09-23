#include <stdio.h>
int binarysearch(int arr[5])
{
   // int n =5;
    int s=0;int end=4;
    int t=44;
    while(s<=end){
        int mid=(s+end)/2;
        if(arr[mid]==t){
            return mid;
        }
        else if(arr[mid]<t){
            s=mid+1;
        }
        else {
            end=mid-1;
        }
    }
     return -1;
}
int main()
{
    int arr[5] = {12,44,56,59,88};
    int data=binarysearch(arr);
    printf("%d",data);
    return 0;
}