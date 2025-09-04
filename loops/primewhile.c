#include<stdio.h>
int main()
{
    int n,i;
    int isprime=1;
    printf("enetr the num");
    scanf("%d",&n);
    i=2;
    if(n<=0)
    {
        isprime=0;
    }
    else{
    while(i<=n/2)
    {
        if (n%i==0)
        {
            isprime=0;
            break;
        }
        
        i++;
    }
}
    if(isprime)
    {
       // printf("this is a prie number");
       printf("no a prime");
    }
    else{
          printf("this is a prie number");
       // printf("no a prime");

    }
    return 0;
}