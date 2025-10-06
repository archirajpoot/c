// #include <stdio.h>

// int main() {
//     char name[] = "hiii";  
//     printf("Name: %c", name[0]);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//    char name []="archi";
//    int i=0;
//    while(name[i]!='\0'){//'\0' is null character
//        printf("%c\n",name[i]);
//        i++;
//    }
//     return 0;
// }
// #include<stdio.h>
// int main(){

//     char name[20];
//     printf("Enter your name:");
//     scanf("%s",name);//it will take input till space
//     printf("Your name is %s",name);
//      return 0;
//     }

//     #include <stdio.h>
// #include <string.h>

// int main() {
//     char name[] = "mada"; // 'h','i','i','\0'
//     int ln=strlen(name);
//     int isTrue=1;
//     for(int i=0;i<ln/2;i++){
//        if(name[i]!=name[ln-i-1]){
//         isTrue=0;
//         break;
//        }

//        }
    
//     if(isTrue==1){
//         printf("palindrome");


//     }
//     else{
//         printf("not palindrome");
//     }
// }
// #include<stdio.h>
// int main() {
//     char name[50];
//     printf("Enter your full name: ");
//     gets(name);  
//     printf("You entered: %s\n", name);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//    char name []="charu";//'c''h'a''r''u''\0'
//    char data[10];
//    for(int i=0;name[i]!='\0';i++){
//     printf("%c\n",name[i]);
//     data[i]=name[i];
//    }
//        printf("%s",data);
   
//     return 0;
// }
#include<stdio.h>
#include<string.h>  
int main(){
    char name []="charu";
    char data[10];

    for(int i=0;name[i]!='\0';i++){
        printf("%c\n",name[i]);
        data[i]=name[i];
    }
    printf("%s",data);
}

