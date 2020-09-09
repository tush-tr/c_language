#include<stdio.h>
int main(){
    int num;
    printf("enter the number you want to write into new file: ");
    scanf("%d",&num);
    FILE *ptr;
    ptr = fopen("write.txt","w");
    fprintf(ptr , "%d",num);
    fclose(ptr);
    return 0;
}