// there are three types of instructions--
// 1 type declaration instruction
// 2 Arithmetic instruction
// 3 control instruciton 
#include<stdio.h>
int main(){
    int a = 4,b,c; // Type declaration instruction
    b = c = a;  // here we are taking variable of integer data type(syntax-- datatype variable;)
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    printf("the value of c is %d\n",c);
    float af =1.1; // here we are declaring variable of float data type
    float bf =af+8.9;
    printf("the value of bf is in float ==%f",bf);
    return 0;
}