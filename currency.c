#include<stdio.h>
int main()
{
 printf("CURRENCY CONVERTER");
 float a,c;
 char choice;
 printf("enetr the amount IN RUPEES");
 scanf("%f",&a);
 printf("enter the choice to covert");
 printf("A.rupess to dollar\n");
printf("B.RUPEES TO CHINESE\n");
  printf("C.RUPPES TO EURO\n");
printf("enter the choice\n");
scanf(" %c ",&choice);
switch(choice)
{
case '$':
     c=a*1/87;
    printf("%f=%f",a,c);
    break;

default:
    break;
}

 return 0;

}