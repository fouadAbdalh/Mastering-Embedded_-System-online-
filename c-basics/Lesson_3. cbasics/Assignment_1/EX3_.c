/**
  ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh 
 ||@ Description          : Write C Program to Add Two Integers
 ||@ Course               : Embedded_System_Online_Diplome 
 ==============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	 // C Program to Add Two Integers
	int value1 ,value2 , sum;
	 printf("Enter two integers: ");
	 fflush(stdin); fflush(stdout);
	 scanf("%d %d" , &value1 , &value2);
	sum = value1 +value2;
	printf("the output %d\r\n" , sum);
	return EXIT_SUCCESS;
}
/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */

