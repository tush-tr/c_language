// factorial(4)=1*2*3*4
#include<stdio.h>
int main(){
    int fac =1;
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int i=0;
    for ( i = 1; i<=n; i++)
    {
        fac *= i;
    }
    printf("The factorial of %d is %d\n",n,fac);
    return 0;
}