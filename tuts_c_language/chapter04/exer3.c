#include<stdio.h>
int main(){
    int sum=0,n=10;
    for ( int i = 0; i<=n; i++)
    {
        sum +=i; // sum = sum+i
    }
    printf("The value of Sum(1 to 10) is %d\n",sum); 
    
    return 0;
}