#include<stdio.h>
int change(int a);
int main(){
    int b=344;
    printf("The value of b before change is %d\n\n",b);
    change(b);
    printf("after change %d",b);

}
int change(int a){
    a = 77;
    return 0;
}
//  this happens because a copy of b is passed to the change function.