// Print a square or rectange of stars by given number of rows and columns
// * * * * * * * * * * 
// * * * * * * * * * * 
// * * * * * * * * * * 
// * * * * * * * * * * 

#include<stdio.h>
int main(){
    int col,row;
    printf("enter the number of rows you want: ");
    scanf("%d",&row);
    printf("Enter the number of columns you want: ");
    scanf("%d",&col);
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    };
    
    return 0;
}