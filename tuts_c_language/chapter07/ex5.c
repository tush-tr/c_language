#include<stdio.h>
int main(){
    int a = 34;
    int *ap = &a;
    int *apa = &a;
    int *apb = &a;
    int *apc = &a;
    printf("The value of pointer of a is %u\n",ap);
    ap = ap + 2;;
    printf("The value of pointer of a after adding by 2 is %u\n\n",ap);
    printf("The value of apa is %u\n",apa);
    apa = apa -2;
    printf("The value of apa after -2 is %u\n",apa);
    printf("The value of apb is %u",apb);
    apb = apb - apa;
    printf("The value of apb-apa is %u\n",apb);
    if (apb>apa)
    {
        printf("Checked apb is greater than apa");
    }
    else
    {
        printf("checked apa is greater than apb");
    }
    
    return 0;
}