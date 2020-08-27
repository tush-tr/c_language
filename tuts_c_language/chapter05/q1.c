#include<stdio.h>
int average(int a,int b, int c);
int main(){
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    printf("Average is %d\n\n",average(a,b,c));
    return 0;
}
int average(int a,int b,int c){
    int v;
    v = (a+b+c)/3;
    return v;
}
