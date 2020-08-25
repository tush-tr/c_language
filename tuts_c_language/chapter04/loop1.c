#include<stdio.h>
int main(){
    int a =1;
    /*// if we want to print increament number of a number we use these instructions
    a++;
    printf("%d\n",a);
    this will only return one number above 1
    and if we want to print more numbers*/
    // print 1 to 5 numbers
    
    while (a<=100)
    {
        // a++;
        printf("%d\n",a++);
    }
    
    
    return 0;
}