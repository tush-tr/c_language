#include<stdio.h>
int main(){
    int i=0,sum=0;
    do
    {
        sum+=i;
        i++;
    } while (i<=10);
    printf("Sum = %d",sum);
    
    return 0;
}