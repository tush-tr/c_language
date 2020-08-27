#include<stdio.h>
// Formula to convert tem from celcius into fahrenheit -- x*(9/5)+32
float tem(float t);
int main(){
    float a;
    printf("Enter the temperature in celcius");
    scanf("%f",&a);
    printf("Temperature in fahrenheit is %f",tem(a));
    return 0;
}
float tem(float t){
    float f;
    f = t*(9/5)+32;
    return f;
}