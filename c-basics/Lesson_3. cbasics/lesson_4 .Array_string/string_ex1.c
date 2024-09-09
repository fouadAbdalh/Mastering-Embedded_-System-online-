/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          : A program in the C language to search for the number of repetitions of a particular character in a text string
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */

#include <stdio.h>
#include <stdlib.h>


 char str[100], ch;
 int i, frequency = 0;

int main(void) {

	 printf("Enter a string:");
	 fflush(stdin);  fflush(stdout);
	 gets(str);

	 printf("Enter a character to find frequency:");
	 fflush(stdin); fflush(stdout);
	 scanf("%C", &ch);

	 for(i=0; str[i]!= '\0'; ++i)
	 {
		 if(str[i]==ch)
		 {
			 frequency++;
		 }
	 }

	 printf("frequency %c =%d", ch, frequency);

	return EXIT_SUCCESS;
}

/**
    ╔═══════════════════════════════════════════════════════════════════════════╗
    ║ @user           : Fouad Bahgat Abdallah                                   ║
    ║ @date           : 9/9/2024                                                ║
    ╚═══════════════════════════════════════════════════════════════════════════╝
    */

