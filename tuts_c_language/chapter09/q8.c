#include<stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
}date;
void display(date d){
    printf("The date is: %d/%d/%d\n\n ",d.date,d.month,d.year);
}
int datecmp(date d1, date d2){
    // make decision on the basis of year comparision
    if (d1.year>d2.year)
    {
        return 1;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }
    // make decision on the basis of month comparision
    if (d1.month>d2.month)
    {
        return 1;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }
    // make decision on the basis of date comparision
    if (d1.date>d2.date)
    {
        return 1;
    }
    if (d1.date<d2.date)
    {
        return -1;
    }
    return 0;

    
    
    
}
int main(){
    printf("\n\n\n");
    date d = {2,11,2020};
    date d2 = {5,4,2022};
    display(d);
    display(d2);
    int a = datecmp(d,d2);
    printf("Date comparision function returns : \n %d\n\n",a);

    return 0;
}