#include<stdio.h>
int main(){
    int age;
    int emer;
    
    printf("Enter your age");
    scanf("%d",&age);
    printf("Enter 1 if you have emergency pass");
    scanf("%d",&emer);
    if ((age<=70 && age>=18) || !(emer==1))
    // here if we use NOT if ((age<=70 && age>=18) || !(emer==1))
    // then it will return oppositve of condition
    {
        printf("Okay you can drive\n\n");

    }
    else
    {
        printf("You can't drive\n");
    }
    
    
    return 0;
}


