#include <stdio.h>

// Function to find the sum of first n elements using recursion
int sumArray(int arr[], int n) {
    // Base case: if there are no elements, return 0
    if (n == 0)
        return 0;

    // Recursive step: add the last element to the sum of remaining elements
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int n, i;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Take array input from user
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the recursive function
    int total = sumArray(arr, n);

    // Display the result
    printf("The sum of the first %d elements is: %d\n", n, total);

    return 0;
}
