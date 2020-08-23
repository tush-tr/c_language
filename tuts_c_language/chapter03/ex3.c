#include<stdio.h>
int main(){
    char a;
    printf("enter the character");
    scanf("%c",&a);
    // In this we are using ASCII table
    int as = a;
    // printf("%d",as);
    if (as>=97 && as<=122)
    {
        printf("It is a Lower case letter\t ");
    }
    else
    {
        printf("This is not a lower case letter\n");
    }
    return 0;
}