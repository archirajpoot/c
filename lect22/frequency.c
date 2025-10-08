#include<stdio.h>
#include<string.h> 

int main(){ 
    char name[]="archii";
    int ln=strlen(name);
    int freq[256]={0};
    for(int i=0;i<ln;i++){
        freq[name[i]]++;
    }
    for(int i=0;i<256;i++){
    if(freq[i]>0){
        printf("%c:%d\n",i,freq[i]);
    }
     
   


    }
}
