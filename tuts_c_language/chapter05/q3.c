#include<stdio.h>
float force(float mass);

int main(){
    float m;
    printf("Enter the value of mass\n\n");
    scanf("%f",&m);
    printf("the force in newton is %f\n\n", force(m));

    return 0;
}
float force(float mass){
    float result;
    result = mass *9.8;
    return result;
}