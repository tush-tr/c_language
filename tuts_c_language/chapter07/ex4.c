#include<stdio.h>
int main()
{
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr is %u\n",ptr);
    // ptr--;
    ptr = ptr+1;
    // ptr++;
    // ptr++;
    printf("the value of ptr is %u\n",ptr);
    char c = 34;
    char *ct = &c;
    printf("The value of ct is %u\n",ct);
    ct++;
    printf("The value of ct is %u\n",ct);
    return 0;
}