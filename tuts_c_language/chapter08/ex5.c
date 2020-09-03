#include<stdio.h>
int main(){
    char str[] = "Rahul";
    // str = "Sahul"; // it can't be reinitialized
    char *s = "Gaurav";
    s = "Saurav";
    puts(s);
    return 0;
}