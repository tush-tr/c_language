#include<stdio.h>
#include<string.h>
struct emp{
    int code;
    float salery;  // this declare a new user defined data type 
    char name[10];
}; // semicolon is important
int main(){
    int a = 34;
    char b = 'g';
    float d = 234.56;
    // emp e1 = 234; it won't work without structures
    struct emp e1;
    e1.code = 100;
    e1.salery = 70.1;
    strcpy(e1.name,"Tushar");
    printf("employee code is %d\n",e1.code);
    printf("employe salery is %f\n",e1.salery);
    printf("Employee name is %s\n",e1.name);
    return 0;
}