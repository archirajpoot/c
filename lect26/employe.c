#include<stdio.h>
#include <string.h>
struct Employe{
    int memid;
    char name[50];
    int salary;
};
int main(){
    int n;
    printf("enter the numbre of empoye");
    scanf("%d",&n);
    struct Employe E1[n];
    for(int i=0;i<n;i++){
        printf("enter the member id of employe");
        scanf("%d",&E1[i].memid);
        printf("enter the name of employe");
        scanf("%s",E1[i].name);
        printf("enter the salary of employe");
        scanf("%d",&E1[i].salary);
    }
      for(int i=0;i<5;i++){
        printf("%s\n",E1[i].name);
        printf("%d\n",E1[i].memid);
        printf("%d\n",E1[i].salary);
    }
    int salary=0;
    for(int i=0;i<n;i++){
        salary=salary+E1[i].salary;
    }
    printf("total salary:%d",salary);
}