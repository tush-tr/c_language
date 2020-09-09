#include<stdio.h>
int main(){
    FILE *fa;
    fa = fopen("putcdemo.txt","w");
    for (int i = 0; i < 10; i++)
    {
        putc('a',fa); // this will write into the file c character
    }
    fclose(fa);  // close the file
    return 0;
}