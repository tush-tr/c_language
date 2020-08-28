#include<stdio.h>
int main(){
    int i =67;
    int *ptr;
    int **pt;
    ptr = &i; // pointer stores address of a variable
    pt = &ptr; // pointer to pointer stores address of a pointer
    printf("The value of i is %d",**pt);
    return 0;
}