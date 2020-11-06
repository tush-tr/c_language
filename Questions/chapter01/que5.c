#include<stdio.h>
int main(){
    int len,bread;
    // taking input the length and breadth of the rectangle
    printf("Enter the lenght and breadth of the rectangle:");
    scanf("%d%d", &len,&bread);
    float radius;
    // taking input the radius of the circle
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    printf("the area of the rectangle=%d\n", len*bread);
    printf("the perimiter of the rectangle=%d\n",2*len+2*bread);
    printf("The area of the circle=%f\n",3.14*radius*radius);
    printf("Circumference of the circle=%f\n",3.14*2*radius);
    return 0;
}