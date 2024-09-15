/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          : To calculate the factorial value (Factorial)
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */

#include <stdio.h>
#include <stdlib.h>

int factorial (int n);

int main(void) {

	int num;

    printf("Enter a positive integer: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &num);
	 if (num < 0) {
	        printf("Error: Factorial is defined only for non-negative integers.\n");
	 } else {
	         printf("Factorial of %d = %d\n", num, factorial(num));
	     }

	return EXIT_SUCCESS;
}

 int factorial (int n)
{
	if (n<=1)
		return 1;
	else
	        return n * factorial(n - 1);


}
 /**
 	          ╔═══════════════════════════════════════════════════════════════════════════╗
 	          ║ @user           : Fouad Bahgat Abdallah                                   ║
 	          ║ @date           : 15/9/2024                                               ║
 	          ╚═══════════════════════════════════════════════════════════════════════════╝
 	          */
