#include<stdio.h>
struct vector{
    int x;
    int y;

};
struct vector sumvector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v2.x + v2.y;
    return result;
    
};

int main(){
    struct vector v1, v2,sum;
    v1.x = 34;
    v1.y = 54;
    v2.x = 30;
    v2.y = 56;
    printf("X dimension is %d and Y dimension is %d\n",v1.x,v1.y);
    printf("*********Second *******\n\n");
    printf("X dimension is %d and Y dimension is %d\n",v2.x,v2.y);
    sum = sumvector(v1,v2);
    printf("The sum of the vector X dimension is %d\n",sum.x);
    printf("THe sum of vector Y dimension is %d\n\n",sum.y);
    

    return 0;
}