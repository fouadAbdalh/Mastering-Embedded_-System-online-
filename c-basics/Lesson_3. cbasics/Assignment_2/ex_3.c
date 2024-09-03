/**
 ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh
 ||@ Description          : check number is positive, negative, or zero
 ||@ Course               : Embedded_System_Online_Diplome
 ==============================================================================
 */




#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is positive.\n", number);
    } else if (number < 0) {
        printf("%d is negative.\n", number);
    } else {
        printf("%d is zero.\n", number);
    }

    return 0;
}

/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */
