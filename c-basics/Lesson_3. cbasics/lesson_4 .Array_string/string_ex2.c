/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          : A program in the C language for calculating the length of a text string entered by the user
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */

#include <stdio.h>
#include <stdlib.h>

 char str[1000];
 int i;


int main(void) {

	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	scanf("%s",str);
    for (i = 0; str[i] != '\0'; ++i);

	printf("\n %d",i);

	return EXIT_SUCCESS;
}
/**
    ╔═══════════════════════════════════════════════════════════════════════════╗
    ║ @user           : Fouad Bahgat Abdallah                                   ║
    ║ @date           : 9/9/2024                                                ║
    ╚═══════════════════════════════════════════════════════════════════════════╝
    */
