#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int newSize;
    printf("enter size");
    scanf("%d",&n);
    int *arr=(int *)malloc(n* sizeof(int));
    printf("Now enter new size");
    scanf("%d",&newSize);
    printf("enter %d element",newSize);
    arr=(int *)realloc(arr , newSize * sizeof(int));
    printf("enter %d element",newSize);
    for(int i=0;i<newSize;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<newSize;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}