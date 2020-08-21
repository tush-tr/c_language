// Arithmetic Instructions
// a+b --- a,b= operands and + is operator
#include<stdio.h>
int main(){
    int a=4;
    int b=8;
    int z;
    z=a+b; //legal
    // a+b=z; //illegal in c
    printf("The value of a+b is=%d\n",a+b);
    printf("The value of a-b is%d\n",a-b);
    printf("The value of a*b is%d\n",a*b);
    printf("The value of a/b is %d\n",a/b);
    printf("The value of remainder of a and b(modular division operator) is %d\n",a%b);
    printf("The value of z is %d\n",z);
    // there is no operator to perform exponentiation in C
    // No operator is assumed to be present
    printf("The value of 4^5 is%d\n",4^5); // will not produce 4 to the power 5
    
    return 0;
}