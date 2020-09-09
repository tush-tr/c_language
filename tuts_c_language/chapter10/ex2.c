#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("read.txt","r");
    int num;
    int num2;
    char a[30];
    fscanf(ptr,"%d%d",&num,&num2);
    fscanf(ptr,"%s",a);
    fclose(ptr); // closing file
    printf("%d\n",num); //printing first integer
    printf("%d\n",num2); // printing second integer
    puts(a);
    
    return 0;
}