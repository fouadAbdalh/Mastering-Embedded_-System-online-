

#include <stdio.h>

// Function to calculate the square root of a number using the Babylonian method
float sqrt_num(float m) {
    float guess = m / 2.0f; // Initial guess
    float epsilon = 0.00001f; // Desired precision
    float difference;

    do {
        float new_guess = 0.5f * (guess + m / guess);
        difference = guess - new_guess;
        guess = new_guess;
    } while (difference > epsilon || difference < -epsilon);

    return guess;
}

int main(void) {
    int num;
    printf("Enter a number to calculate square root: ");
    fflush(stdout);
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input! Square root of a negative number is not real.\n");
    } else {
        printf("Square root of %d = %.3f\n", num, sqrt_num((float)num));
    }

    return 0;
}
