#include<stdio.h>
void printtable(int *arr,int num){
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num*(i+1);
    }
    for (int i = 0; i <10; i++)
    {
        printf("%d X %d = %d\n",num,i+1,arr[i]);
    }
    
}
int main(){
    int multable[3][10];
    printf("multiplication table of 2\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     multable[0][i] = 2*(i+1);
    // }
    // for (int i = 0; i <10; i++)
    // {
    //     printf("2 X %d = %d\n",i+1,multable[0][i]);
    // }
    printtable(multable[0],2);
    printf("multiplication table of 7\n");
    // for (int i = 0; i < 10; i++)
    // {
    //     multable[1][i] = 7*(i+1);
    // }
    // for (int i = 0; i <10; i++)
    // {
    //     printf("7 X %d = %d\n",i+1,multable[1][i]);
    // }
    printtable(multable[1],7);
    printf("multiplication table of 9\n");
    //  for (int i = 0; i < 10; i++)
    // {
    //     multable[2][i] = 9*(i+1);
    // }
    // for (int i = 0; i <10; i++)
    // {
    //     printf("9 X %d = %d\n",i+1,multable[2][i]);
    // }
    printtable(multable[3],9);

    return 0;
}