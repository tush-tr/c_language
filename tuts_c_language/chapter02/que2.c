#include<stdio.h>
int main(){
    int digit;
    printf("Enter the number: ");
    scanf("%d",&digit);
    int i,j,k,l,m;
    i=digit/10000;  //1
    j=(digit/1000)%10;  //2
    k=(digit/100)%10;   //3
    l=(digit/10)%10;    //4
    m=digit%10;         //5
    int temp,tem;
    temp = i;
    i = l;
    l = temp;
    tem = j;
    j = m;
    m = tem;
    printf("%d%d%d%d%d\n\n",i,j,k,l,m);
    return 0;
}