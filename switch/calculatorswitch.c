#include<stdio.h>
int main()
{
    int a,b;char ch;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("enter the choice");
    scanf(" %c ",&ch);
    switch (ch)
    {
    case '+':
        printf("the sum of these two numbers are %d",a+b);
        break;
    case '-':
        printf("the sub of these two numbers are %d",a-b);
        break;
    case '*':
        printf("the mul of these two numbers are %d",a*b);
        break;
    case '/':
        switch (b)
        {
        case 0:printf("division cant be possible");
               break;
        
        default:printf("the div of these two numbers are %d",a/b);
                 break;
        }
       
    default:printf("invalid choice");
         break;
    }
    return 0;
}