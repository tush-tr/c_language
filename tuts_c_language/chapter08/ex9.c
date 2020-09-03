#include<stdio.h>
#include<string.h>
int main(){
    char st1[45] = "Hello ";
    char *st2 = "Rahul";
    strcat(st1,st2);
    puts(st1);
    return 0;
}