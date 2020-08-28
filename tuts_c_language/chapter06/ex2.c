#include<stdio.h>
int main(){
    int i=8;
    int *j; // j will now store the address of i
    j = &i;
    int **k;
    k = &j;
    int ***l;
    l = &k;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The address of i is %u\n",&i);
    printf("The address of i is %u\n",j);
    printf("The address of j is %u\n",&j);
    printf("The value of j is %u\n", *(&j));
    printf("The addresss of j is %u\n",k);
    printf("The address of k is %u\n",l);

    return 0;
}