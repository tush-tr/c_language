#include<stdio.h>
int main(){
    int n;
    printf("Enter in how many you want to sort?");
    scanf("%d",&n);
    for (int a = 1; a <=n;a++)
    {
        if (a%2==0)
        {
            printf("Even number: %d\n",a);
        }
    }
    printf("\n\n\n\n\n");
    for ( int b= 0; b <=n; b++)
    {
        if (b%2!=0)
        {
            printf("Odd number: %d\n",b);
        }
        
    }
    
    
    return 0;
}