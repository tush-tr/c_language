#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    char st[50];
    char c;
    int i =0;
    printf("Enter the value of first string\n");
    scanf("%s",s);
    // fflush(stdin);
    // scanf("%c",&c);
    printf("Enter the second string\n");
    while (c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        st[i] = c;
        i++;
    }
    st[i-1] = '\0';
    printf("the value of s is %s\n\n",s);
    printf("the value of st is %s\n",st);
    return 0;
}