#include<stdio.h>
int main(){
    char c;
    FILE *f;
    f = fopen("full_file.txt","r");
    c = fgetc(f);
    while (c!=EOF)
    {
        printf("%c",c);
        c = fgetc(f);
    }    
    printf("\n");
    return 0;
    
    
}