#include<stdio.h>
int main(){
    int arr[10]={12,123,23,2,43,43,5,3,23,123};
    int *ptr;
    ptr = &arr[0];  // ptr = arr;
    // printf("the value of ptr or address of first element of arrray is %u",ptr);
    ptr = ptr + 2;
    if (*ptr==23)
    {
        printf("ptr+2 points to third element of array");
    }
    else
    {
        printf("Not pointing");
    }
    
    

    return 0;
}