#include <stdio.h>

// Function to reverse digits of a number
int reverse_number(int num);

int main() {
    int number;

    printf("Enter an integer: ");

    scanf("%d", &number);


    printf("Reversed number = %d\n", reverse_number(number));
    return 0;
}


int reverse_number(int num) {
    int remainder, reversed = 0;

    // Loop until all digits are processed
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return reversed;
}
