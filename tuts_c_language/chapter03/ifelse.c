#include<stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if (age>18)
    {
        printf("Yes You can Drive");
    }
    else
    {
        printf("You can't Drive\n\n");
    }
    
    
    return 0;
}