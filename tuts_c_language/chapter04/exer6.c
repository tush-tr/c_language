#include<stdio.h>
int main(){
    int i=1;
    int sum=0;
    while (i<=10)
    {
        printf("%d\n",i*8);
        sum+=i*8;
        i++;
        
    }
    printf("%d\n\n\n\n",sum);
}