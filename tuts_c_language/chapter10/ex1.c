#include<stdio.h>
int main(){
    FILE *ptr;
    // If we want to write a file we use w mode
    ptr = fopen("sample.txt","w");
    // Now running this program we can see a created text file

    return 0;
}