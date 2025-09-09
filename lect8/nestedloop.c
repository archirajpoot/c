#include<stdio.h>
int main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<6;i++)
    {
         for(int j=6;j>=i;j--){
           printf("*");
        }
        printf("\n");
    }
    for(int i=7;i<12;i++)
    {
        for(int j=1;j<12-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<i;j++){
            printf("*");
        }
    }
    
    
}








































