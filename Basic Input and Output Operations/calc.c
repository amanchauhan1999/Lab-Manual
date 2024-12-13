#include <stdio.h>

int main() {
    
    float num1, num2, result;
    char operator;

    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter arithmetic operator (+, -, *, /): ");
    scanf(" %c", &operator);  

   
    result = (operator == '+') ? num1 + num2 :
             (operator == '-') ? num1 - num2 :
             (operator == '*') ? num1 * num2 :
             (operator == '/') ? (num2 != 0 ? num1 / num2 : 0) : 0;  
  /
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
        printf("Result: %.2f\n", result);
    } else {
        printf("Invalid operator!\n");
    }

    return 0;
}
