#include<stdio.h>
#include<stdlib.h>
int main(){
    int *f;
    f = (int*)malloc(6 * sizeof(int));
    for (int i = 0; i <6; i++)
    {
        printf("Enter the value of %d element: ",i+1);
        printf("\n");
        scanf("%d",&f[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is %d\n",i+1,f[i]);
    }
    return 0;
}