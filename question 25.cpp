#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    float result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Note the space before %c

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %.2f\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is not allowed.\n");
            } else {
                printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
            }
            break;

        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}

