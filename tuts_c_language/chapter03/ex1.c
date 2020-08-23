#include<stdio.h>
int main(){
    int physics, chemistry, math;
    printf("Enter physics marks");
    scanf("%d",&physics);
    if (physics>=33)
    {
        printf("You are pass in physics\n");
    }
    else
    {
        printf("You are fail in physics\n");
    }
    printf("Enter chemistry marks");
    scanf("%d",&chemistry);
    if (chemistry>=33)
    {
        printf("You are pass in chemistry\n");
    }
    else
    {
        printf("You are fail in chemistry\n");
    }
    printf("Enter math marks");
    scanf("%d",&math);
    if (math>=33)
    {
        printf("You are pass in math\n");
    }
    else
    {
        printf("You are fail in math\n");
    }
    int total = physics+chemistry+math;
    printf("Your Total marks are %d\n",total);
    int tp = total/3;
    if (tp>=40)
    {
        printf("You are clear pass\n");
    }
    else
    {
        printf("You are fail\n");
    }
    
    return 0;
}