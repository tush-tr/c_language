#include<stdio.h>
struct vector{
    int x;
    int y;

};
int main(){
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 54;
    v2.x = 30;
    v2.y = 56;
    printf("X dimension is %d and Y dimension is %d\n",v1.x,v1.y);
    printf("*********Second *******\n\n");
    printf("X dimension is %d and Y dimension is %d\n",v2.x,v2.y);


    

    return 0;
}