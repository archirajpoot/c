#include<stdio.h>
int palindrome(int arr[],int i,int j){
   if(i>=j)
     return 1;
   if(arr[i]!=arr[j]){
       return 0;
   }
   return palindrome(arr,i+1,j-1);
}
int palindrome(int arr[],int i,int j){
   if(arr[i]==arr[j])
     return palindrome(arr,i+1,j-1);
   if(arr[i]!=arr[j]){
       return 0;
   }
   return palindrome(arr,i+1,j-1);
}
int main(){

    int arr[]={1,2,8,4,3,2,1};
    int n=7;
    int firstindex=0;
    int lastindex=n-1;
    int data=palindrome(arr,firstindex,lastindex);
    printf("%d",data);
}