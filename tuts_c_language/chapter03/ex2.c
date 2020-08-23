#include<stdio.h>
int main(){
    float inc;
    printf("Enter your Income in Lakhs");
    scanf("%f",&inc);
    float tax1 = (inc-2.5)*5/100;
    float tax2 = (inc-2.5)*20/100;
    float tax3 = (inc-2.5)*30/100;
    if (inc>=2.5 && inc<=5.0)
    {
        printf("Tax is %f\n", tax1);
    }
    else if (inc>5.0 && inc<=10.0)
    {
        printf("Tax is %f\n ",tax2);
    }
    else if (inc<2.5)
    {
        printf("There is no tax under 2.5 lakh income\n");
    }
    else
    {
        printf("Tax is %f\n",tax3);
    }
    
    
    
    
    
    return 0;
}