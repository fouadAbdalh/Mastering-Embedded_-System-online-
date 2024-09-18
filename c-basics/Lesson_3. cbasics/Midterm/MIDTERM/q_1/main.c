
/*
 ============================================================================

 Description : C function that takes a number as input and sums all its digits:
 ============================================================================
 */
#include <stdio.h>

// Function declaration
int digits_sum(int num);

int main(void) {
    int x;
    printf("Enter an integer number: ");
    fflush(stdout);
    scanf("%d", &x);


    printf("Sum of digits = %d\n", digits_sum(x));

    return 0;
}

// Function to calculate the sum of digits of a number
int digits_sum(int num) {
    int sum_digit = 0;

    // Loop to sum digits
    while (num > 0) {
        sum_digit += num % 10;  // Add the last digit to sum
        num /= 10;              // Remove the last digit
    }

    return sum_digit;
}
