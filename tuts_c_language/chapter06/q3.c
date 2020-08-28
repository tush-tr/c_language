#include<stdio.h>
void change(int *i){
    *i = 10 * *i;
}
int main(){
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    printf("The value of a before change function is %d\n",a);
    change(&a);
    printf("The value of a after change function is %d\n\n\n",a);
    return 0;
}