#include<stdio.h>
int main(){
    int p,n;
    float r;
    int c =1;
    while (c<=3)
    {
    printf("Enter the value of p, n and r");
    scanf("%d%d%f",&p,&n,&r);
    float si = p*n*r/100;
    printf("simple Interest is %f", si);
    c++;
    }
    
    return 0;
}
