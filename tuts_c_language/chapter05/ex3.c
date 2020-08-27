#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("Good Morning\n");
    goofafternoon();
}
void goodafternoon(){
    printf("Good After noon\n");
    goodnight();
}
void goodnight(){
    printf("Good Night\n");
}