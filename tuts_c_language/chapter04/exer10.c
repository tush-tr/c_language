#include<stdio.h>
int main(){
    int n,prime=1,i=2;
    printf("Enter the number you want to check");
    scanf("%d",&n);
    while (i<n)
    {
        i++;
        if (n%i==0)
        {
            prime=0;
            break;        }
        
        
    }
     if (prime==0)
    {
            printf("This is not a prime number\n\n");
        
    }
    else
    {
        printf("This is a prime number\n");
    }


    return 0;
}