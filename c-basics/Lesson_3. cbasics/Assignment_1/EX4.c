/**
 * ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh 
 ||@ Description          : program to multiply two Numbers by taking two numbers from the user, multiplying them, and displaying the product.c
 ||@ Course               : Embedded_System_Online_Diplome 
==============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Floating-Point Multiplication
	float num1, num2, Multiplied;

	printf("Enter two numbers: ");
	 fflush(stdin); fflush(stdout);
	scanf("%f %f", &num1, &num2);
	Multiplied = num1 * num2;             // multiplication

	printf("Product %f\r\n", Multiplied);
	return EXIT_SUCCESS;
}

/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */
