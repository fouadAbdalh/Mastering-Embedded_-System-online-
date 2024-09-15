/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          : Reverse the order of words in a sentence that the user enters.
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */


#include <stdio.h>
#include <stdlib.h>

void reverseSentence();   //Function definition

int main(void) {
	printf("Enter a sentence: ");
	                                // Call the function to reverse the sentence
	    reverseSentence();

	    printf("\n");
	return EXIT_SUCCESS;
}
void reverseSentence()   //Function declaration

{
	      char c;
	      fflush(stdin);  fflush(stdout);
	    scanf("%c", &c);
	    if (c != '\n') {
	        reverseSentence();

	        printf("%c", c);
}
}


/**
	          ╔═══════════════════════════════════════════════════════════════════════════╗
	          ║ @user           : Fouad Bahgat Abdallah                                   ║
	          ║ @date           : 15/9/2024                                               ║
	          ╚═══════════════════════════════════════════════════════════════════════════╝
	          */
