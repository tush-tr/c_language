#include<stdio.h>
int main(){
    int i=5;
    printf("The value after i++ is %d\n\n",i++);
    printf("The value of i is %d\n",i);
    printf("The value after ++i is %d\n",++i);
    printf("The value of i is %d\n",i);
    printf("The value after i-- is %d\n",i--);
    printf("The value of i is%d\n",i);
    printf("The value after --i is %d\n",--i);
    return 0;
}
/*
output--
The value after i++ is 5
The value of i is 6
The value after ++i is 7
The value of i is 7
The value after i-- is 7
The value of i is6
The value after --i is 5
*/