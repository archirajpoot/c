#include<stdio.h>
int main(){
   
    int arr[5]={9,33,44,22,4};
     int min=arr[0];
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);

}