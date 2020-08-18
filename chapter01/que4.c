// temperature fahrenheit to celcius program
#include<stdio.h>
int main(){
    float tem;
    printf("Ënter the temperature in fahrenheit");
    scanf("%f",&tem);
    printf("The temperature in celcius=%f", (tem-32)/1.8000);
    return 0;
}