/* what is prime number
 A prime is a natural number greater than 1 that has no positive 
 divisors other than 1 and itself. Examples of first few prime numbers
  are {2, 3, 5,
 disclaimber -  this is not the best method to solve this problem 
*/

#include<stdio.h>
int main(){
    int n,prime=1;
    printf("Enter the number you want to check");
    scanf("%d",&n);
    for (int i = 2; i<n; i++)
    {
        if (n%i==0)
        {
            prime =0;
            break;
        }
        
    }
    if (prime==0)
    {
            printf("This is not a prime number\n\n");
        
    }
    else
    {
        printf("This is a prime number\n");
    }
    return 0;

}