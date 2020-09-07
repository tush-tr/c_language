#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salery;
    char name[20];
}emp;
int main(){
    // declaring ptr(pointer) and e1
    emp e1;
    emp *ptr;
    // Pointng ptr to e1
    ptr = &e1;   
    // Set the values for e1
    ptr->code = 101;
    ptr->salery = 12.5;
    strcpy(ptr->name,"Rahul");
    printf("%d\n",e1.code);
    printf("%f\n",e1.salery);
    printf("%s\n",e1.name);

    return 0;
    
    
}