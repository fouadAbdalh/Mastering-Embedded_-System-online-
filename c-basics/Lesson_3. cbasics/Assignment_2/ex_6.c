/**
 ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh
 ||@ Description          : find factorial of a number
 ||@ Course               : Embedded_System_Online_Diplome
 ==============================================================================
 */

#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}



/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */
