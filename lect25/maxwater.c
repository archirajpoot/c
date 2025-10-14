#include<stdio.h>
int main(){
    int height[]={1,2,3,4,5,6,7};
    int n=sizeof(height)/sizeof(height[0]);
    int i=0;
    int j=n-1;
    int maxwater=0;
    while(i<j){
        int h;
     if(height[i]<height[j]){
        h=height[i];
     }
     int w=j-i;
     int water=h*w;
     if(water>maxwater)
    {
        maxwater==water;
    }
     if()
}
printf("%d",maxwater);


}
