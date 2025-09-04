#include<stdio.h>
int main()
{
    int t1,t2,next,n;
    t1=0;t2=1;
    printf("enter the number");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        printf("%d",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
        i++;
    }
    return 0;
}