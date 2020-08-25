#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        printf("The value of i is %d\n",i);
    }
    
    return 0;
}