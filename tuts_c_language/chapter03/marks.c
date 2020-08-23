#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the marks in 5 subjects one by one");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int total = a+b+c+d+e;
    printf("Total marks are %d\n",total);
    int per = total/5;
    printf("The total percentage is %d\n",per);
    if (per>=45 && per<=60)
    {
        printf("Second Division\n");
    }
    else if (per>=33 && per<=45)
    {
        printf("Third division\n");
    }
    else if (per<33)
    {
        printf("You are fail\n");
    }
    else
    {
        printf("Congrats! You got First Division\n");
    }
    
    


    return 0;
}