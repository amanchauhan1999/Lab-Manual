#include<stdio.h>
int main(int argc, char const *argv[])
{
    float p,r,t;
    printf("Enter the Principal,Rate and Time in years :");
    scanf("%f %f %f",&p,&r,&t);

    float  amount = p*pow(1+r,t);

    printf("The amount is %.2f",amount);
    return 0;
}
