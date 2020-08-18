#include <stdio.h>

int main()
{
    int digit, i,j,k,l,m;
    printf("Enter the five digit number");
    scanf("%d",&digit);
    i=digit/10000;
    j=(digit/1000)%10;
    k=(digit/100)%10;
    l=(digit/10)%10;
    m=digit%10;
    printf("The sum of 5 digits =%d",i+j+k+l+m);

    return 0;
}
/*
logic in the program--
digit = 1 2 3 4 5
i = digit/10000=1(First number)
j = (digit/1000)%10=2 (second number)
k = (digit/100)%10 = 3 (third number)
l = (digit/10)%10 = 4 (fourth number)
m = (digit%10 = 5(Fifth number)






*/
