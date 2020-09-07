#include<stdio.h>
#include<string.h>
typedef struct bank{
    int account_no;
    int ifsc;
    char branch[20];
}account;
int main(){
    printf("\n\n\n\n\n\n");
    account ram;
    account *account_ram;
    account_ram = &ram;
    account_ram->account_no = 235678;
    strcpy(account_ram->branch ,"Dilshad Garden");
    account_ram->ifsc = 0120015;
    printf("**********Account of Ram**********\n");
    printf("The account no. of Ram is %d\n\n\n",ram.account_no);
    printf("The IFSC code of Account of Ram is %d\n\n\n\n",ram.ifsc);
    printf("The branch name of Ram's account is %s\n\n\n\n\n\n\n",ram.branch); 

    return 0;
}