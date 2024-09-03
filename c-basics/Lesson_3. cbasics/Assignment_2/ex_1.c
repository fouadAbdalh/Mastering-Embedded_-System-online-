

 /**
  ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh
 ||@ Description          :  check number even or odd 
 ||@ Course               : Embedded_System_Online_Diplome
  ==============================================================================
 */
#include <stdio.h>
int main (void)
{
	int number_to_test, remainder;

	printf ("Enter your number to be tested.: ");
	scanf ("%i", &number_to_test);
	fflush(stdin); fflush(stdout);

	remainder = number_to_test % 2;

	if ( remainder == 0 )
		printf ("The number is even.\n");
	if ( remainder != 0 )
		printf ("The number is odd.\n");
	return 0;
}

/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */

