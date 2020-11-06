#include<stdio.h>
int main(){
    int digit;
    printf("Enter the number: ");
    scanf("%d",&digit);
    int j,k,l,m;
    j=(digit/1000)%10;  //1
    k=(digit/100)%10;   //2
    l=(digit/10)%10;    //3
    m=digit%10;         //4
    printf("The sum of first and last digit is %d\n",j+m);
    return 0;
}