// Snake water gun
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char user,char cpu){
    // returns 1 if user win, -1 if user lose , 0 if draw
    // conditions for draw
    if (user == cpu)
    {
        return 0;
    }
    // Non-Draw conditions
    // snake and gun
    if (user = 's' && cpu =='g')
    {
        return -1;
    }
    else if (user = 'g' && cpu == 's')
    {
        return 1;
    }
    // water and snake
    if (user ='s' && cpu == 'w')
    {
        return 1;
    }
    else if (user =='w' && cpu == 's')
    {
        return -1;
    }
    // gun and water
    if (user ='g' && cpu == 'w')
    {
        return -1;
    }
    else if (user =='w' && cpu == 'g')
    {
        return 1;
    }
}
int main(){
    int count;
    char user,cpu;
    int result;
    int number;
    srand(time(0));
    number = rand()%100 +1;
    if (number<33)
    {
        cpu = 's';
    }
    else if (number>33 && number<66)
    {
        cpu = 'w';
    }
    else
    {
        cpu = 'g';
    }
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &user);
    result = snakewatergun(user, cpu);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", user, cpu);
    return 0;
}

