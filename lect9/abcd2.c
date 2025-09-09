
#include<stdio.h>
// Method 1
/*
int main()
{
    char ch='A';
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6-i;j++)
        {
          printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}*/
// Method 2
int main()
{
    int num=65;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<3-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%c",num++);
        }
        for(int p=2;p<=i;p++){
            printf("%c",num++);
        }
        printf("\n");


    }
    return 0;
}