#include<stdio.h>
int main(){
   int arr[5]={88,22,44,55,33};
   int max=arr[0];
   for(int i=0;i<5;i++){
    if(max<arr[i]){
        max=arr[i];
    }
   }
    printf("%d",max);
   return 0;
 
}