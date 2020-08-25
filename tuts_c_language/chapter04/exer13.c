/*Algorithm to find sum of digits of a number
Get least significant digit of number (number%10) and add it to the sum variable.
Remove least significant digit form number (number = number/10).
Repeat above two steps, till number is not equal to zero.
Reading last digit of a number : 1234%10 = 4
Removing last digit of a number : 1234/10 = 123*/



#include<stdio.h>
int main(){
    printf("Enter the number");
    int number,sum=0;
    scanf("%d",&number);
    int t=0;
    do
    {
        sum += number%10;
        number=number/10;
    } while (number!=0);
    printf("total is %d\n\n",sum);
    
    return 0;
}