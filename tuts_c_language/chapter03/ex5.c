#include<stdio.h>
int main(){
    char a;
    printf("Enter the character\n");
    scanf("%c",&a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("The character you entered is a vowel\n");
    }
    else
    {
        printf("The character you entered is a constant\n");
    }
    
    return 0;
}