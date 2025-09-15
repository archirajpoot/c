#include<stdio.h>
int main(){
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            printf("even=%d\n",arr[i]);
        }
       else{
        printf("odd=%d\n",arr[i]);
       }
    }
    return 0;
}