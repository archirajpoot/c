#include<stdio.h>
int main()
{  
    int n;
    printf("enter the num");
    scanf("%d",&n);
    int isprime=1;
   if(n<=1)
   {
    isprime=0;
   }
   for(int i=2;i<=n-1;i++)
   { 
     if(n%i==0)
     {
        isprime=0;
        break;
     }
     
    }
    if(isprime)
    {
    printf("it is a pn");
    
    }
    else{
        printf("it is not prime number");
    }
    return 0;
}