/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          : To calculate the power of a number using the iterative function
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */

#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent);  // Function declaration

int main(void) {
    int base, exponent;

    // Asking user for the base number
    printf("Enter base number: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &base);

    // Asking user for the exponent number
    printf("Enter exponent: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &exponent);

    // Displaying the result of base^exponent
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return EXIT_SUCCESS;
}

// Recursive function to calculate the power
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}
/**
	          ╔═══════════════════════════════════════════════════════════════════════════╗
	          ║ @user           : Fouad Bahgat Abdallah                                   ║
	          ║ @date           : 15/9/2024                                               ║
	          ╚═══════════════════════════════════════════════════════════════════════════╝
	          */

