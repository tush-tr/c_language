#include<stdio.h>
int main(){
    int py,jy,years;
    printf("Enter current year");
    scanf("%d",&py);
    printf("Enter the year you joined: ");
    scanf("%d",&jy);
    years = py - jy;
    if(years>3){
        printf("Your bonus is %d /-\n",2500);
    }
    return 0;
}