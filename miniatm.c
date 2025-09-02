#include<stdio.h>
int main()
{
    int acc,a,c,sc;
    int b=15908;
    printf("enter your acc nummber\n");
    scanf("%d",&acc);
    printf("------welcome to your mini account:)------ ");
    printf("\n1.deposit money \n2.withdrawal money \n3.check balance \n4.report problem \n5.exit");
    printf("\nenter your choice");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
       
        printf("enter the amnt to deposit");
        scanf("%d",&a);
        printf("deposit sucessfully\n");
        printf("perivios balance:%d\n",b);
        printf("current balance:%d\n",b+a);
        break;
    case 2:
         printf("enter the amount of money to withdrwal\n");
         scanf("%d",&a);
         if(a>b)
         printf("insufficient balance");
         else{
         printf("previous balance:%d\n",b);
         printf("remaining balance:%d",b-a);}
         break;
   case 3:
         printf("Your current balance is %d",b);
         break;
   case 4:
        printf("1.wrong balance display\n");
        printf("2.deposit and withdrawal fail\n");
        printf("3.insuficient balance error\n");
        printf("4.others\n");
        scanf("%d",&sc);
        if(sc==4){
        printf("contact to your nearby branch");}
        else{
        printf("your problem had been notiiced please contact costumer support");}
        break;
    case 5:
        printf("thankyou..");
        break;
         
    

    }

return 0;


}