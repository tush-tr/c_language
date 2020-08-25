#include<stdio.h>
int main(){
    int a;
    printf("How many times you want to repeat 8 ");
    scanf(" %d",&a);
    int i=0;
    while (i<a)
    {
        printf("%d\n",8);
        i++;
    }
    
    return 0;
}