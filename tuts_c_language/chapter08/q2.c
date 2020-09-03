/*Write a function slice() to slice a string. 
It should change the original string such that 
it is now the sliced string.Take m and n as the start and ending 
position for slice*/
#include<stdio.h>
void slice(char *st,int m,int n){
    // starting from m
    // ending at n
    while (m<n)
    {
        st[m];
        m++;
    }
    st[m] = '\0';
}
int main(){
    char st[] = "tushar";
    slice(st,1,4);
    printf("%s\n",st);
    return 0;

}