#include<stdio.h>
int sum(int n);
int main(){
    int a;
    printf("Enter the value of number");
    scanf("%d",&a);
    printf("Sum of natural numbers is %d",sum(a));
    return 0;
}
int sum(int n){
    int result;
    if (n<=1)
    {
        return 1;
    }
    else
    {
    result = n + sum(n-1) ;
    return result;
        
    }
    
}