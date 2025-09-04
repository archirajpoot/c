#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("enter a num");
    scanf("%d",&n);
    if(n==0)
    {
        count=1;
    }
    while(n>0)
    {
        count++;
        n=n/10;
        

    }
    printf("%d",count);
}