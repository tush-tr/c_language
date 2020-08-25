#include<stdio.h>
int main(){
    for (int i = 5; i ; i--)
    {
        printf("%d\n",i);
    }
    // this for loop will keep on running until i becomes zero

    return 0;
}
/*
steps of loop--
1. i is initialized to 5
2. the condition 'i' (0 or non 0) is tested
3. the code is executed
4. i is decremented
5. condition i is checked & code is executed if its not 0;
6. & so on i is non 0
*/