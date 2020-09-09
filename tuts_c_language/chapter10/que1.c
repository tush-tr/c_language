#include<stdio.h>
int main(){
    FILE *f;
    int a,b,c;
    f = fopen("que1.txt","r");
    fscanf(f, "%d%d%d",&a,&b,&c);
    printf("The values of a,b and c is %d %d %d\n\n",a,b,c);
}