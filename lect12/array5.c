#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    printf("even number are");
    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
    }
    for