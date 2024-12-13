#include <stdio.h>

int main() {
    int num1, num2;

   
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

   
    int greatest = (num1 > num2) ? num1 : num2;

    
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
