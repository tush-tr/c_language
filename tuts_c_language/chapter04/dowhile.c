#include<stdio.h>
int main(){
    int i=15;
    do
    {
        printf("The value of i is %d\n",i);
        i++;
    } while (i<10);
    // it will execute atleast once if the condition false also
    
    return 0;
}