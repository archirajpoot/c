#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int RollNo;
    float marks;
};
int main(){
    struct Student s1[3];
    for(int i=0;i<3;i++){
        printf("enter your name");
        scanf("%s",s1[i].name);
        printf("enter the rolno.");
        scanf("%d",&s1[i].RollNo);
        printf("enter marks");
        scanf("%f",&s1[i].marks);
    }
    for(int i=0;i<5;i++){
        printf("%s\n",s1[i].name);
        printf("%d\n",s1[i].RollNo);
        printf("%f\n",s1[i].marks);
    }
}