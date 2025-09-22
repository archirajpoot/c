#include<stdio.h>
void sum(int *a,int *b){
           int temp=*a;
           *a=*b;
           *b=temp;
            
}
int main(){
    int a=5,b=8;
    sum(&a,&b);
    printf("%d%d",a,b);
    return 0;
   
}