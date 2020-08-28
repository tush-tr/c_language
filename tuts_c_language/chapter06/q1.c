#include<stdio.h>
int main(){
    int a=4;
    printf("The address of the variable a is %u\n",&a);
    int *ad;
    ad = &a;
    printf("The address of variable a is %u\n",ad);
    printf("The value of variable a is %d",*ad);
    return 0;
}

