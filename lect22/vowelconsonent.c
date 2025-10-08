#include<stdio.h>
#include<string.h>
int main(){
    char string[]="hello";
    int ln=strlen(string);
    int vcount=0;
    int ccount=0;
    for(int i=0;i<ln;i++){
        if(string[i]=='a' || string[i]=='e' || string[i]=='o' || string[i]=='u'){
            vcount++;
        }
        else{
            ccount++;
        }
    }
    printf("vowel=%d",vcount);
    printf("consonent=%d",ccount);
    return 0;
}