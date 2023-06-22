#include <stdio.h>

int main() {
    float number1, number2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &number1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%f", &number2);

    float result;

    switch (operator) {
        case '+':
            result = number1 + number2;
            printf("The sum is: %.2f\n", result);
            break;
        case '-':
            result = number1 - number2;
            printf("The difference is: %.2f\n", result);
            break;
        case '*':
            result = number1 * number2;
            printf("The product is: %.2f\n", result);
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
                printf("The division result is: %.2f\n", result);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
