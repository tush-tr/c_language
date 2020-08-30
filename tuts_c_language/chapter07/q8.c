#include<stdio.h>
int main(){
    int arr[2][3][4];
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k <4; k++)
            {
                int *a = &arr[i][j][k];
                printf("The addres of [%d][%d][%d] is %u\n",i,j,k,a);
            }
            
        }
        
    }
    
    return 0;
}