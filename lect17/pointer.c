#include<stdio.h>
int sum(int *a,int *b){
 *a=7;*b=4;
 return *a+*b;
}
int main(){
    int a=5,b=8;
    int data=sum(&a,&b);
    printf("%d\n",data);
    printf("%d",a+b);
}