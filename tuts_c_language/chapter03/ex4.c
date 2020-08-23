#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter four numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>b && a>c && a>d)
    {
        printf("first number is greatest\n");
    }
    else if (b>a && b>c && b>d)
    {
        printf("Second number is greatest");
    }
    else if (c>a && c>b && c>d)
    {
        printf("Third number is greatest");
    }
    else
    {
        printf("Fourth number is greatest");
    }
    return 0;
}