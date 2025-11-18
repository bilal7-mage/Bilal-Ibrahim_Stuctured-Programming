#include <stdio.h>

int main() {
    int num1, num2;  // variables to store the two numbers

    // Asking user for input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Performing operations
    printf("\n-- Results --\n");
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %d\n", num1 / num2);   // assumes num2 != 0
    printf("Modulus: %d\n", num1 % num2);

    return 0;
}
