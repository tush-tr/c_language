#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int *ptr2;
    ptr = (int*)malloc(600 * sizeof(int));
    for (int i = 0; i < 600; i++)
    {
        ptr2 = (int*)malloc(600 * sizeof(int));
        printf("Enter the value of %d element: ",i+1);
        scanf("%d",&ptr[i]);
        free(ptr2);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n",i+1,ptr[i]);   
    }
    
    
    return 0;
}