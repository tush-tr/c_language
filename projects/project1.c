#include<stdio.h>
#include<stdlib.h>//we need this library for generate number
#include<time.h>
int main()
{
    int number,guess,n=0;
    srand(time(0));
    number = rand() % 100 + 1; //generate random number between 1 and 100
    printf("the number is %d",number);
    //keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1 and 100\n\n\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number please\n\n\n\n");
        }
        
        else if (guess<number)
        
        {
            printf("Higher number please\n\n\n\n");
        }
        else
        {
            printf("you guessed in %d attempts\n", n);
        }
        n++;
        
        
        
    } while (guess!=number);
    
    
    return 0;

}