#include<stdio.h>
typedef struct employee
{
    char name[20];
    int salery;
}emp;
int main(){
    emp emp1;
    emp emp2;
    emp emp3;
    emp emp4;
    emp emp5;
    char s[50];
    printf("Enter the name of the file you want to make to store employees salery: ");
    scanf("%s",s);

    printf("\n\n\n");
    // first employee
    printf("Enter the name of the first employee: ");
    scanf("%s",emp1.name);
    printf("\n");
    printf("Enter the salery of first employee: ");
    scanf("%d",&emp1.salery);

    printf("\n");
    // Second employee
    printf("Enter the name of second employee  ");
    scanf("%s",emp2.name);
    printf("\n");
    printf("Enter the salery of second employee: ");
    scanf("%d",&emp2.salery);
    
    printf("\n");
    // third employee
    printf("Enter the name of the third employee: ");
    scanf("%s",emp3.name);
    printf("\n");
    printf("Enter the salery of third employee: ");
    scanf("%d",&emp3.salery);

    printf("\n");
    // fourth employee
    printf("Enter the name of fourth employee  ");
    scanf("%s",emp4.name);
    printf("\n");
    printf("Enter the salery of fourth employee: ");
    scanf("%d",&emp4.salery);

    printf("\n");
    // fifth employee
    printf("Enter the name of fifth employee  ");
    scanf("%s",emp5.name);
    printf("\n");
    printf("Enter the salery of fifth employee: ");
    scanf("%d",&emp5.salery);

    printf("\n\n\n");

    FILE *ef;
    ef = fopen(s,"w");
    fprintf(ef,"Name,Salery\n");
    fprintf(ef,"%s,%d\n",emp1.name,emp1.salery);
    fprintf(ef,"%s,%d\n",emp2.name,emp2.salery);
    fprintf(ef,"%s,%d\n",emp3.name,emp3.salery);
    fprintf(ef,"%s,%d\n",emp4.name,emp4.salery);
    fprintf(ef,"%s,%d\n",emp5.name,emp5.salery);
    return 0;
}