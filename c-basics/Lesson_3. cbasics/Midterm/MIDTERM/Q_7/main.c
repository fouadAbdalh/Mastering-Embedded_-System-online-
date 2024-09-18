#include <stdio.h>

// Function to calculate the sum from 1 to n
int sum_n_numbers(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int result = sum_n_numbers(100);
    printf("The sum of numbers from 1 to 100 is: %d\n", result);
    return 0;
}
