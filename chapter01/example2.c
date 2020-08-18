// calculation of interest
#include<stdio.h>
int main()
{
    int a,b;
    float c,d;
    // taking input from user
    printf("Enter the values of a,b,c:");
    scanf("%d %d %f", &a,&b,&c);
    d = a*b*c/100;
    printf("%f\n", d);


    return 0;
}