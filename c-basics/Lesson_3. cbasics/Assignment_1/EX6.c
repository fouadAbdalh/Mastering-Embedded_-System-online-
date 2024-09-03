/*
 ============================================================================
 Name        : EX6_Swap.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a ,b , temp;

	printf("enter value of a:");
	fflush(stdin);  fflush(stdout);
	scanf("%f" , &a);

	printf("enter value of b");
	fflush(stdin);  fflush(stdout);
	scanf("%f" ,&b);

	// Display values before swapping 
	printf("\nBefore swapping:\n");
	printf("Value of a = %.2f\n", a);
	printf("Value of b = %.2f\n", b);

	//swapping process
	temp = a;
	a = b;
	b = temp;

	printf("After swapping, value of a %f\n\r" , a);
	printf("After swapping , value of b %f\n\r" , b);

	return EXIT_SUCCESS;
}
/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */
