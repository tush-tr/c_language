#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while (*ptr!='\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }    
}
void encrypt(char *c){
    char *ptr = c;
    while (*ptr!='\0')
    {
        *ptr = *ptr+1;
        ptr++;
    }   
}
int main(){
    char password[100];
    char de[100];
    int n;
    printf("\n\n\n");
    printf("*********************Encryption and decryption program**************\n\n\n");
    printf("What you want to do enter 1 for Encryption or 2 for decryption");
    scanf("%d",&n);
    printf("\n\n");
    if (n==1)
    {
        printf("Enter the password: \n");
    scanf("%s",password);
    printf("\n\n");
    encrypt(password);
    printf("Your password is encrypted\n");
    printf("\n\n");
    printf("Your encrypted password is--\n  %s\n",password);
    }
    else
    {
        printf("Enter the encrypted password\n");
        scanf("%s",de);
        printf("\n\n");
        decrypt(de);
        printf("Your real password is %s\n\n\n",de);
    }
    printf("\n\n\n");
    printf("*********************************\n\n");
    return 0;
}
