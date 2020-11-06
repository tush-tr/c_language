#include<stdio.h>
int main(){
    int sp,pp;
    printf("Enter the selling price of 15 items");
    scanf("%d",&sp);
    printf("Profit of the 15 items");
    scanf("%d",&pp);
    int cp = sp-pp;
    int cp1 = cp/15;
    printf("the cost price of one item is%d\n",cp1);
    return 0;
}