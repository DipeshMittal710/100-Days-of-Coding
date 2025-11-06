#include <stdio.h>

long int factorial(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else
        printf("Factorial of %d = %ld\n", n, factorial(n));

    return 0;
}

long int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

