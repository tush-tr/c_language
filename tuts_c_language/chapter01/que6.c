// volume of a cylinder
#include<stdio.h>
int main(){
    float r,h;
    printf("Enter the height and radius");
    scanf("%f%f",&h,&r);
    // V= πr^2h
    printf("The volume of the cylinder=%f",3.14*r*r*h);
    return 0;
}