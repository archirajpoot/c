// Slinding Window
#include<stdio.h>
int main(){
    int arr[5]={1,4,6,-7,3};
    int k=2;
    int windowsum=0;
    for(int i=0;i<2;i++){
        windowsum+=arr[i];
    }
    int maxsum=windowsum;
    for(int i=k;i<5;i++){
        windowsum=windowsum+arr[i]-arr[i-k];
        if(windowsum>maxsum){
            maxsum=windowsum;
        }
    }
    printf("%d",maxsum);
}