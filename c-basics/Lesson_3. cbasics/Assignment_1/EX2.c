/**
  ==============================================================================
 = @ file                 : main.c
 = @ author               : fouad bahgat Abdallh 
 = @ Description          : Print a Integer Entered by a User
 = @ Course               : Embedded_System_Online_Diplome 
  ==============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number;
	printf("Enter an integer:");     //prompt the user input
	fflush(stdin); fflush(stdout);
	scanf("%d", &number);              // Read the integer entered by the user
	printf("you entered %d\r\n", number );   // print the entered integer
	return EXIT_SUCCESS;
}

/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */
