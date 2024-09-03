/*
 ============================================================================
 Name        : EX7_.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b;

	    printf("Enter value of a: ");
	    fflush(stdin);  fflush(stdout);
	    scanf("%f", &a);

	    printf("Enter value of b: ");
	    fflush(stdin);   fflush(stdout);
	    scanf("%f", &b);
	    
	    // Display values before swapping
	    printf("\nBefore swapping:\n");
	    printf("Value of a = %.2f\n", a);
	    printf("Value of b = %.2f\n", b);

	    // Swapping process without temp variable
	    a = a + b;
	    b = a - b;
	    a = a - b;

	    printf("After swapping, value of a: %f\n\r", a);
	    printf("After swapping, value of b: %f\n\r", b);
	return EXIT_SUCCESS;
}
/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */

