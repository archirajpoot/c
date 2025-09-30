#include<stdio.h>
int main(){
    int a[5]={2,-5,7,5,3};
    int k;
    printf("Enter the value of k:");
    scanf("%d",&k);
    int ksum=0;
    for(int i=0;i<k;i++){
    //   ksum+=i;
        ksum+=a[i];
    }
    int maxsum=ksum;
    for(int i=k;i<5;i++){
        ksum=ksum+a[i]-a[i-k];
        if(ksum>maxsum){
            maxsum=ksum;
        }
    }
            printf("%d\n",maxsum);

}