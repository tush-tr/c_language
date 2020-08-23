#include<stdio.h>
int main(){
    int a;
    printf("Enter your age");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("You can Vote\n");
    }
    else
    {
        printf("Sorry You can't VOTE\n");
    }
    
    
    return 0;
}