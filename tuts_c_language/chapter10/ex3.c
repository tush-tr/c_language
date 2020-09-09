#include<stdio.h>
int main(){
    char in[40];
    printf("Enter the name of file with extension: \n");
    scanf("%s",in);
    printf("\n");
    FILE *ptr;
    ptr = fopen(in,"r");
    int num,num2;
    char a[30];
    if (ptr == NULL)
    {
        printf("File does not exist\n\n");
        
    }
    else
    {
        printf("File exists\n\n");
        fscanf(ptr,"%d%d",&num,&num2);
        fscanf(ptr,"%s",a);
        fclose(ptr); // closing file
        printf("First integer in the file is %d\n",num); //printing first integer
        printf("second integer in the file is %d\n",num2); // printing second integer
        printf("String in the file is: ");
        puts(a);
    }
    return 0;
    
}