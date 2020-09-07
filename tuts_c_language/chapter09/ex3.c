#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salery;
    char name[10];
};
int main(){
    struct employee facebook[100]; // array of structures
    // We can access the data using
    facebook[0].code = 100;
    facebook[0].salery = 12.5;
    strcpy(facebook[0].name,"Tushar");
    
    facebook[1].code = 101;
    facebook[1].salery = 12.0;
    strcpy(facebook[1].name,"Rahul");

    facebook[2].code = 102;
    facebook[2].salery = 12.5;
    strcpy(facebook[2].name,"sahul");

    facebook[3].code = 104;
    facebook[3].salery = 13.5;
    strcpy(facebook[3].name,"mahul");
    printf("Done\n");

    return 0;
}