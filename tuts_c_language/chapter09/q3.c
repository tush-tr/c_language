#include<stdio.h>
struct any
{
    int a;
    float b;
};

int main(){
    struct any r;
    struct any *p;
    p = &r;
    p->a = 101;
    p->b = 4.5;
    printf("First content or structure any is %d\n",r.a);
    printf("Second conent of structure any is %f\n",r.b);
    return 0;
}