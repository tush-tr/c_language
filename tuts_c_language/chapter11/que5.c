#include<stdio.h>
#include<stdlib.h>
int main(){
    int *mul;
    mul = (int*)malloc(10*sizeof(int));
    for (int i = 0; i <10; i++)
    {
        printf("%d x %d = %d\n",7,i+1,(i+1)*7);
    }
    printf("\n\n Again after realloc\n\n");
    mul = realloc(mul,15*sizeof(int));
    for (int i = 0; i <15; i++)
    {
        printf("%d x %d = %d\n",7,i+1,(i+1)*7);
    }
    return 0;  
}