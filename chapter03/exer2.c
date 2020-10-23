#include<stdio.h>
int main(){
    int q,d=0;
    float rate,total;
    printf("Enter quantity and rate: ");
    scanf("%d%f",&q,&rate);
    if(q>1000){
        d =10;
    }
    total = (q*rate) - (q*rate*d/100);
    printf("Total expenses = Rs.  %f\n",total);

    return 0;
}