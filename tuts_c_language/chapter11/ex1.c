#include<stdio.h>
int main(){
    int *ptr;
    printf("The size of int on my pc is : %ld\n ",sizeof(int));
    printf("The size of float on my pc is : %ld\n",sizeof(float));
    printf("The size of char on my pc is: %ld\n",sizeof(char));
    // ptr = malloc(6 * sizeof(int));
    return 0;
}