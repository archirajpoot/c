#include<stdio.h>
int main(){
   int a;
   printf("enter the number of that dayyy:)");
   scanf("%d",&a);
   switch(a)
   {
    case 1:printf("monday");
           break;
    case 2:printf("tuesday");
           break;
    case 3:printf("wednesday");
           break;
    case 4:printf("thrusday") ;
           break;
    case 5:printf("friday");
           break;    
    case 6:printf("saturday");
           break;  
    case 7:printf("sunday");
           break;
     default: printf("invalid");
           break;
 }
   return 0;

}