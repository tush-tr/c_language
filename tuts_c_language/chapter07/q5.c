#include<stdio.h>
int main(){
    int count=0;
    int n;
    int arr[10];
    
    printf("Enter the array size");
    scanf("%d",&n);
    printf("Enter array elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i <6; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
        
    }
    printf("Total positive integers in array = %d\n",count);
    
    return 0;
}