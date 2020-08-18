// input = marks obtained by a student in five different subjects
// eng hindi math sst science
#include<stdio.h>
int main(){
    int eng, hindi, math, sst, science;
    printf("Enter the numbers in the order-english, hindi, math, sst, science");
    scanf("%d %d %d %d %d", &eng, &hindi, &math, &sst,&science);
    int sum = eng+hindi+math+sst+science;
    int aggregate = sum/5;
    printf("the aggregate marks=%d\n", aggregate);
    printf("Percentage of english subject=%d\n",eng*100/100);
    printf("Percentage in hindi subject=%d\n",hindi*100/100);
    printf("Percentage in math subject=%d\n",math*100/100);
    printf("Percentage in sst subject=%d\n",sst*100/100);
    printf("Percentage in science subject=%d\n",science*100/100);
    printf("the total percentage is = %d\n",sum*100/500);
    return 0;
}