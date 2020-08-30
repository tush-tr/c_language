#include<stdio.h>
void display(int cf,int cs,int ar[cf][cs]){
    for (int i = 0; i <cf; i++)
    {
        for (int j = 0; j <cs; j++)
        {
            printf("%d\n",ar[i][j]); // error is here in the function
        }
    }
}
int main(){
    int cf;
    int cs;
    printf("Enter how many students you have ");
    scanf("%d",&cf);
    printf("Enter how many subjects one student have ");
    scanf("%d",&cs);
    int arr[cf][cs];
    for (int i = 0; i < cf; i++)
    {
        for (int j = 0; j < cs; j++)
        {
            printf("Enter no. %d student in subject %d - \n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }    
    }
    display(cf,cs,arr);
    return 0;
}