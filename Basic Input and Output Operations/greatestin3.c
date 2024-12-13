#include <stdio.h>

int main() {
    
    float num1, num2, num3, greatest;

   
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Enter third number: ");
    scanf("%f", &num3);

   
    greatest = (num1 >= num2 && num1 >= num3) ? num1 : ((num2 >= num3) ? num2 : num3);


    printf("The greatest number is: %.2f\n", greatest);

    return 0;
}
