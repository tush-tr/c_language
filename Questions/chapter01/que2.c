// input the distance between two cities in km 
// and convert into meter, feet, inches, centimeter 
#include<stdio.h>
int main(){
    float a;
    printf("enter the distance between two cities in km:");
    scanf("%f",&a);
    printf("Distance in meters= %f\n", a*1000);
    printf("Distance in feet=%f\n",a*3280.8399);
    printf("Distance in inches=%f\n",a*39370.0787);
    printf("Distance in centimeter=%f\n",a*100000);
    return 0;
}