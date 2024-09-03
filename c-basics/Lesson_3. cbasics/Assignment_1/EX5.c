/**
  ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh 
 ||@ Description          : ASCII Value
 ||@ Course               : Embedded_System_Online_Diplome 
  ==============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch ;
	printf("Enter a character");
	fflush(stdin);  fflush(stdout);
	scanf("%c" ,&ch);
	printf("ASCII value of %c = %d",ch);
	return EXIT_SUCCESS;
}

/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */
