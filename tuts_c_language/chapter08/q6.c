// Write a program to count the occurence of a given character in a string.
#include<stdio.h>
int occurence(char s[],char c){
    char *ptr = s;
    int count;
    while (*ptr!='\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
        
    }
    return count;
    
}
int main(){
    char s[] = "Rahul";
    int o = occurence(s,'r');
    printf("Occurence is %d\n\n",o);

    return 0;
}