#include<stdio.h>
int main(){
    // // simple way to create 4 ints
    // int m1,m2,m3,m4;
    // m1 = 35;
    // m2 = 50;
    // m3 = 60;
    // m4 = 75;
    // array method
    int marks[4];
    printf("Enter marks in four subjects");
    scanf("%d%d%d%d",&marks[0],&marks[1],&marks[2],&marks[3]);
    printf("marks in subject 1= %d\n",marks[0]);
    printf("marks in subject 2 = %d\n",marks[1]);
    printf("marks in subject 3 = %d\n",marks[2]);
    printf("marks in subject 4 = %d\n",marks[3]);

    return 0;
}