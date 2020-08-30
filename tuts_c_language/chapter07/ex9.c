#include<stdio.h>
int main(){
    int n_students = 3;
    int n_subjects = 5;
    int school = 2;
    int marks[3][5][2];
    for (int i = 0; i <n_students; i++)
    {
        for (int j = 0; j <n_subjects; j++)
        {
            for (int k = 0; k <school; k++)
            {
                
            printf("Enter the marks of student %d in subject %d from school %d\n",i+1,j+1,k+1);
            scanf("%d",&marks[i][j][k]);
            }
            
        }
        
    }
    
    for (int i = 0; i <n_students; i++)
    {
        for (int j = 0; j <n_subjects; j++)
        {
            for (int k = 0; k < school; k++)
            {
                
            printf("marks of student %d in subject %d from school %d is: %d\n\n",i+1,j+1,k+1,marks[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}