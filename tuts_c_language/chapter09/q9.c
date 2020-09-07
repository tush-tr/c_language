#include<stdio.h>
#include<string.h>
typedef struct time{
    int hour;
    int minut;
    int second;
}time;
void display(time t){
    printf("Time is %d:%d:%d\n\n",t.hour,t.minut,t.second);
}
int timecmp(time t1,time t2){
    if (t1.hour>t2.hour)
    {
        return 1;
    }
    if (t1.hour<t2.hour)
    {
        return -1;
    }
    // decision on the basis of minuts
    if (t1.minut>t2.minut)
    {
        return 1;
    }
    if (t1.minut<t2.minut)
    {
        return -1;
    }
    // Decision basis of seconds
    if (t1.second>t2.second)
    {
        return 1;
    }
    if (t1.second<t1.second)
    {
        return -1;
    }
    return 0;
    
    
    
    
}
int main(){
    time t1 = {5,45,34};
    time t2 = {3,30,45};
    display(t1);
    display(t2);
    int com =     timecmp(t1,t2);
    if (com=1)
    {
        printf("Time 1 is bigger\n");
    }
    else 
    {
        printf("Time 2 is bigger\n\n");
    }
    
    
    return 0;
}