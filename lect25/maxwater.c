#include<stdio.h>
int main(){
    int height[]={5,6,0,3,5,2};
    int left[6];
    int right[6];
    left[0]=height[0];
    int water=0;
    for(int i=1;i<6;i++){
        if(left[i-1]<height[i]){
            left[i]=height[i];
        }
        else{
            left[i]=left[i-1];
        }
    }
    right[5]=height[5];
   for(int i=4;i>=0;i--){
    if(right[i+1]<height[i]){
        right[i]=height[i];
    }
    else{
        right[i]=right[i+1];
    }
}
    for(int i=0;i<6;i++){
     int minheight;
     if(left[i]<right[i]){
        minheight=left[i];
     }
     else{
        minheight=right[i];
     }
     water=water+(minheight-height[i]);
    }
 
   
      printf("%d",water);
      return 0;
}