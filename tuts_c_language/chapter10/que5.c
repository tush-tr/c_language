#include<stdio.h>
int main(){
    int a,b;
    FILE *f;
    FILE *fm;
    f = fopen("que5.txt","r");
    fscanf(f,"%d",&a);
    b = 2 * a;
    fclose(f);
    fm = fopen("que5.txt","w");
    fprintf(fm,"%d",b);
    fclose(fm);
    printf("Done\n\n");
    return 0;
}