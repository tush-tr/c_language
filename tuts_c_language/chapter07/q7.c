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
    int a,b,c;
    int multable[3][10];
    printf("Enter which 3 tables you want\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("multiplication table of %d\n",a);
    printtable(multable[0],a);
    printf("multiplication table of %d\n",b);
    printtable(multable[0],b);
    printf("multiplication table of %d\n",c);
    printtable(multable[0],c);

    return 0;
}