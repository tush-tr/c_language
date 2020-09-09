#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    ptr = fopen("femo.txt","r");
    // fgetc demo for reading a file
    for (int i = 0; i != EOF; i++)
    {
        char c = fgetc(ptr);
        printf("%c",c);
    }
    printf("\n");
    return 0;
}