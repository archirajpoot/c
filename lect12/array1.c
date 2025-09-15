#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the element");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the elemnet are");
    for(int i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
    
    return 0;
}