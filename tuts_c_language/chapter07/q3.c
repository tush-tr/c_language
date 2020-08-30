#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i]=n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
     printf("%d x😁😁😁 %d = %d\n",n,i+1,mul[i]);
    }
    
    return 0;
}