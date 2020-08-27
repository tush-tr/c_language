#include<stdio.h>
int sum(int a,int b); // function prototype
int main(){
    int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    printf("The sum is %d\n",sum(a,b)); // calling function

    return 0;
}
// function definition
int sum(int a,int b){ // a and b are parameters
    int c; 
    c=a+b;
    return c;
}

