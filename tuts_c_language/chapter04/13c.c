#include<stdio.h>
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int i = 1;
    while (i<=10)
    {
        printf("%d\n",a*i);
        i++;
    }
    
    return 0;
}