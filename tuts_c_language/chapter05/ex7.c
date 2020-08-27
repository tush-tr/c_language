#include<stdio.h>
int factorial(int x);
int main(){
    int n;
    printf("Enter the number\n ");
    scanf("%d",&n);
    printf("Factorial of %d is %d\n\n",n,factorial(n));
    return 0;
}
int factorial(int x){
    int f;
    if (x==0 || x==1)
    {
        return 1;
    }
    else
    {
        f = x*factorial(x-1);
        return f;
    }

}