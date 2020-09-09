#include<stdio.h>
int main(){
    FILE *f;
    int t;
    printf("Enter the number you need the table of: ");
    scanf("%d",&t);
    f = fopen("que2.txt","w");
    fprintf(f,"***************The Mutliplication table of %d  **********\n\n",t);
    for (int i = 1; i <10; i++)
    {
        fprintf(f,"%d x %d = %d\n",t, i, t*i);
    }
    fclose(f);
    printf("successfully made the multiplication table of %d \n\n",t);
    return 0;
}