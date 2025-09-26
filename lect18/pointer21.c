#include<stdio.h>

int main(){
    int a[3]={1,2,3};
    int *p=a;
    int max= a[0];
    for(int i=2;i>=0;i--)
    {
        printf("%d\n",*(p+i));
        if(max<a[i]){
            max==a[i];
            printf("%d",max);
        }
    }

    
}