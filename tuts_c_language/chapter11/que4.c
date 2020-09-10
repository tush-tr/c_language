#include<stdio.h>
#include<stdlib.h>
int main(){
    int *f;
    f = (int*)alloc(5*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element",i+1);
        scanf("%d",&f[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("The value of %d element is %d\n",i+1,f[i]);
    }
    // re allocating now
    f = realloc(f,10*sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element",i+1);
        scanf("%d",&f[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("The value of %d element is %d\n",i+1,f[i]);
    }
    return 0;
}