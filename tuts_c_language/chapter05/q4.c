// fib(n) = fib(n-1) + fib(n-2)
// fib(1)=0
// fib(2)=1
#include<stdio.h>
int fib(int n);
int main(){
    int a = 7;
    printf("%d\n",fib(a));
    return 0;
}
int fib(int n)
{
    int result;
    if (n==0 || n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        result = fib(n-1)+fib(n-2);
        return result;
    }
}
