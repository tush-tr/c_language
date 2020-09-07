#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salery;
    char name[20];
};

void show(struct employee emp){
    printf("The code of employee is :%d\n",emp.code);
    printf("The salery of employee is :%f\n",emp.salery);
    printf("The name of employee is :%s\n",emp.name);
} 
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 101;
    ptr->salery = 15.4;
    strcpy(ptr->name,"Rahul"); 
    show(e1);   
    return 0;
}