#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p,r,t;
    printf("Enter the Principal,Rate and Time in years :");
    scanf(" %d %d %d",&p,&r,&t);

    int amount = p*r*t/100;
    printf("The Total Amount is %d\n",amount+p);
    printf("The Intrest is %d",amount);
    return 0;
}
