#include<stdio.h>
// void printarray(int *ptr,int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value of element %d is %d\n",i+1,*(ptr+i));
//     }
    
// }
void printarray(int ptr[],int n){
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf(" %d,",ptr[i]);
    }
    printf("}");
}

int main(){
    int arr[] = {12,234,3223,342,4,4};
    printarray(arr,5);
    return 0;
}