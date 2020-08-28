#include<stdio.h>
void sa(int a, int b, int *sum, float *avg){
    *sum=a+b;
    *avg = (float)(*sum)/2;

}
int main(){
    int i=3,j=6,sum;
    float avg;
    sa(i,j, &sum, &avg);
    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %f\n",avg);
    return 0;
}