#include<stdio.h>
#include<string.h>
    int main(){
        char name[]="hello";
        int ln=strlen(name);
        int count;
        for(int i=0;i<ln;i++){
            count=0;
            for(int j=0;j<i;j++){
                if(name[i]==name[j]){
                    count++;
                    break;
                }
            }
        if(count==0){
        printf("%c",name[i]);
        }
        } 
       
    }