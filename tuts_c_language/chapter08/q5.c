// Write a program to decrypt the string encrypted 
// using encrypte function in problem 5

#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while (*ptr!='\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }
    
}
int main(){
    char c[] = "Ifmmp!xibu(t!vq";
    decrypt(c);
    printf("Encrypted string is %s\n\n",c);
    return 0;
}
