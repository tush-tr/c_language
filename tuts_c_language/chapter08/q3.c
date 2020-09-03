/*Write your own version of strcpy() function from < string.h >*/
// strcpy(target,source); source to target
#include<stdio.h>
void strcp(char *target,char *source){
    int i = 0;
    while (target[i]=='\0')
    {
        target[i]=source[i];
        i++;
    }
    target[i] = '\0';
    
}
int main(){
    char a[] = "Rahul";
    char s[20];
    strcp(s,a);
    printf("%s",s);


    return 0;
}