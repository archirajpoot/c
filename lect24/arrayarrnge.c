#include<stdio.h>
#include<stdlib.h>
void sort(int arr[],int n){
   int low=0,mid=0,high=n-1;
   for(int i=0;i<n;i++){
    if(arr[i]==0){
        int t=arr[mid];
        arr[mid]=arr[low];
        arr[low]=t;
        low++;
        mid++;

    }
    else if(arr[i]<0)
    {
     mid++;
    }
    else{
        int t=arr[mid];
        arr[mid]=arr[high];
        arr[high]=t;
        high--;
    }
   }
}
int main(){
    int n;
    printf("enter size");
    scanf("%d",&n);
    int *arr=(int *)malloc(n* sizeof(int));
    printf("enter %d element",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // sort(arr,n);
    int j=0;
     for(int i=0;i<n;i++){
       if(arr[i]==0){
        arr[j]=arr[i];
        j++;
       }
    }
    for(int i=0;i<n;i++){
       if(arr[i]<0){
        arr[j]=arr[i];
        j++;
       }
    }
    for(int i=0;i<n;i++){
       if(arr[i]>0){
        arr[j]=arr[i];
        j++;
       }
    }
     for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
