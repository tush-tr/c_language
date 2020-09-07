// Write a program with a structure representing a complex number.
#include<stdio.h>
typedef struct complex{
    float real;
    float img;
}complex_no;
int main(){
    complex_no one;
    complex_no *p;
    p = &one;
    float get,geta;
    printf("Enter the real number:\n");
    scanf("%f",&get);
    p->real = get;
    printf("Enter the imaginary number:\n");
    scanf("%f",&geta);
    p->img = geta;
    printf("The one complex number:\n");
    printf("Value of real number is %f\n",one.real);
    printf("The value of imaginary number is %f\n",one.img);


    return 0;
}