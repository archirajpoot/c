#include<stdio.h>
int main()
{
    int num=1;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3-i;j++)
        {
          printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",num++);
        }
        for(int p=2;p<=i;p++)
        {
            printf("%d",num++);
        }
       
       printf("\n");
    }
    return 0;
}