#include<stdio.h>
int main(){
    char s[30];
    printf("Enter your name  ");
    gets(s);
    printf("Hello Mr. %s\n",s);
    return 0;
}