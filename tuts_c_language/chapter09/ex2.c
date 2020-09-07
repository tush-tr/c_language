#include<stdio.h>
struct employee
{
    int code;
    float salery;
    char name[10];
};
int main(){
    struct employee emp1,emp2,emp3;
    printf("Enter the code of employee 1: ");
    scanf("%d",&emp1.code);
    printf("Enter the salery of employee 1: ");
    scanf("%f",&emp1.salery);
    printf("Enter the name of employee 1: ");
    scanf("%s",emp1.name);
    printf("\n");
    printf("Enter the code of employee 2: ");
    scanf("%d",&emp2.code);
    printf("Enter the salery of employee 2: ");
    scanf("%f",&emp2.salery);
    printf("Enter the name of employee 2: ");
    scanf("%s",emp2.name);
    printf("\n");
    printf("Enter the code of employee 3: ");
    scanf("%d",&emp3.code);
    printf("Enter the salery of employee 3: ");
    scanf("%f",&emp3.salery);
    printf("Enter the name of employee 3: ");
    scanf("%s",emp3.name);
     return 0;
}