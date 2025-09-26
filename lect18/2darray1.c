#include<stdio.h>
int sum=0;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("a[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);

}