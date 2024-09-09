/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          : c programming Insert any element in array
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */

#include <stdio.h>
#include <stdlib.h>

 int size, index, location, value;
 int array[50];

int main(void) {

	printf("Enter number of element in array:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);

	printf("Enter number of array");
	for(index=0; index<size; index++)
	{
		fflush(stdin); fflush(stdout);
		scanf("%d",&array[index]);
	}

	 printf("Enter the location");
	 fflush(stdin); fflush(stdout);
	 scanf("%d",&location);

	 printf("Enter the value to insert:");
	 fflush(stdin);  fflush(stdout);
	 scanf("%d",&value);

	 // Inserting element at specified position
	     for (index = size - 1; index >= location; index--) {
	         array[index + 1] = array[index];
	     }

	     array[location] = value;

	     size = size + 1;

	     /* Printing the resultant array */
	     printf("Resultant array is:\n");
	     for (index = 0; index < size; index++) {
	         printf("%d ", array[index]);
	     }

	     /**
	          ╔═══════════════════════════════════════════════════════════════════════════╗
	          ║ @user           : Fouad Bahgat Abdallah                                   ║
	          ║ @date           : 9/9/2024                                                ║
	          ╚═══════════════════════════════════════════════════════════════════════════╝
	          */


