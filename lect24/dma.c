#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter size");
    scanf("%d",&n);
    int *arr=(int *)malloc(n* sizeof(int));
    printf("enter %d element",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}