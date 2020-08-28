#include<stdio.h>
void pas(int i);
int main(){
    int i=4;
    printf("Adress of i is %u\n",&i);
    pas(i);
    return 0;
}
void pas(int i){
    printf("Address of i after function is %u",&i);
}
// addresses are not same-- because 
// we are passing a copy of the variable to
//  the function