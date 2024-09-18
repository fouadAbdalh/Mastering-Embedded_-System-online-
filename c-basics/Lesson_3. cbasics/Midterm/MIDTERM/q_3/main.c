/*
 ============================================================================
 Description : C program to find prime numbers between two intervals entered by the user
 ============================================================================
 */

#include <stdio.h>

// Function to check if a number is prime
int is_prime(int num);

int main() {
    int lower, upper, i;


    printf("Enter the lower and upper bounds of the interval: ");

    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);

    // Loop through the range and print prime numbers
    for (i = lower; i < upper; ++i) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

// Function to check if a number is prime
int is_prime(int num) {
    if (num < 2) {
        return 0;
    }

    for (int j = 2; j * j <= num; ++j) {
        if (num % j == 0) {
            return 0; // Not a prime number
        }
    }

    return 1; // Prime number
}
