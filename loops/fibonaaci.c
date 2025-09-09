#include<stdio.h>
int main()
{
    int n,t1,t2,next;
    t1=0;t2=1;
    printf("ente the number of the series ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    return 0;
}     