#include<stdio.h>
struct employee{
    int code;
    float salery;
    char name[10];
};
int main(){
    struct employee rahul = {100, 34.23,"Rahul"};
    printf("Code is %d\n",rahul.code);
    printf("salery is %f\n",rahul.salery);
    printf("name is %s\n",rahul.name);
    return 0;
}
