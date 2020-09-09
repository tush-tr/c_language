#include<stdio.h>
int main(){
    int number;
    FILE *ptr;
    char file_name[50];
    printf("Enter the name of the file you want to create: ");
    scanf("%s",file_name);
    printf("How many integers you want to store in your file: ");
    scanf("%d",&number);
    int n;
    ptr = fopen(file_name,"w");
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&n);
        fprintf(ptr,"%d\n",n);
    }
    fclose(ptr);
    
    
    
    // fprintf(ptr,"%d",n2);
    // fprintf(ptr,"%d",n3);
    // fprintf(ptr,"%d",n4);
    // fprintf(ptr,"%d",n5);
        
        

    
    return 0;
}