// Write a program to check whether a given character is 
// present in a string or not.
#include<stdio.h>
int check(char s[],char c ){
    char *a = s;
    int e=0;
    while (*a!='\0')
    {
        
         if (*a ==c)
        {
            e++;
        }
        
        a++;
    }
    return e;
    
    
   

}
int main(){
    char a[] = "Tushar";
    int e = check(a,'r');
    // if (e>1)
    // {
    //     printf("Exists");
    // }
    // printf("%d",e);
    if (e>=1)
    {
        printf("Exists\n\n");
    }
    
    return 0;
}