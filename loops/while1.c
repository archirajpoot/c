//sum of the digit of numbers
#include<stdio.h>
int main()
{
  int LastDigit,num;
  int sum=0;
  printf("enter your number");
  scanf("%d",&num);
  while(num>0)
  {
    LastDigit=num%10;
    sum+=LastDigit;
    num=num/10;
  }
  printf("sum of this digit = %d",sum);
 return 0;
}
   