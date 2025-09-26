#include<stdio.h>
int main(){
   int isprime=1;
   int n=7;
   if(n==1){
    
   }
   for(int i=2;i<n/2;i++){
    if(n%i==0){
        isprime=1;
        break;
    }
}
if(isprime){
    printf("prime");
}
else{
    printf("notprime");
}
}