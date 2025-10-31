#include <stdio.h>

int sorted(int arr[], int i,int j) {
  if(i>=j)
  return 1;
  if(arr[i]>arr[i+1])
  return 0;
  return sorted(arr,i+1,j);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i=0;
    int j=n-1;
    int data=sorted(arr,i,j);
    printf("%d",data);
    return 0;
}
