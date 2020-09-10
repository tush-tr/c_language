#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr = malloc(10 * sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element: ",i+1);
        scanf("%f",&ptr[i]);
    }
    for (int i = 0; i <5; i++)
    {
        printf("The value of %d element is %f\n",i+1,ptr[i]);
    }
    return 0;
}