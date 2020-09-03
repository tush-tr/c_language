#include<stdio.h>
int length(char s[]){
    int count = 0;
    char *p = s;
    while (*p != '\0')
    {
        p++;
        count++;
    }
    return count;

}
int main(){
    char t[] = "tushar";
    int l = length(t);
    printf("%d",l);
    return 0;
}