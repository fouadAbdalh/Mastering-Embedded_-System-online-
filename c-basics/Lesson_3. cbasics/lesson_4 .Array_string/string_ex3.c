/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          : A C-language program that reverses a text string entered by the user
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */

#include <stdio.h>
#include <stdlib.h>

                 char text[100], temp;
	    	    int start, end;
    int main(void) {

	    // Input the string
	    printf("Enter the string: ");
	    gets(text);

	    start = 0;
	    end = strlen(text) - 1;

	    // Reversing the string
	    while (start < end) {
	        temp = text[start];
	        text[start] = text[end];
	        text[end] = temp;
	        start++;
	        end--;
	    }


	    printf("Reversed string is: %s", text);

	return EXIT_SUCCESS;
}
    /**
        ╔═══════════════════════════════════════════════════════════════════════════╗
        ║ @user           : Fouad Bahgat Abdallah                                   ║
        ║ @date           : 9/9/2024                                                ║
        ╚═══════════════════════════════════════════════════════════════════════════╝
        */



