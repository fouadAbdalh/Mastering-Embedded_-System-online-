
/**
 ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh
 ||@ Description          : c program chack sum of natural numbers
 ||@ Course               : Embedded_System_Online_Diplome
 ==============================================================================
 */

#include <stdio.h>

int main() {
    int n, summing = 0;

    printf("Enter the limit: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);

    // Iterative Method
    for (int i = 1; i <= n; i++) {
    	summing += i;                   // Or something :summing = summing +i
    }

    printf("The sum of natural numbers up to %d is %d\n", n, summing );

    return 0;
}

/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */

