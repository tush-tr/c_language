#include<stdio.h>
#include<string.h>
int main(){
    char st1[45] = "Hello";
    char *st2 = "hell";
    int v = strcmp(st1,st2);
    printf("Now the v is %d\n",v);
    return 0;
}