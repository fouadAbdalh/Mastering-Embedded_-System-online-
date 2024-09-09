/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          :c programming transpose_matrix
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */

#include <stdio.h>
#include <stdlib.h>

 float original_matrix[3][3] ,   transpose_matrix[3][3];
 int row, col;


int main(void) {

	 // input for the original matrix (3*3)
	printf("Enter element of the 3*3 matrix:\n");
	for(row=0; row<3; row++)
	{
		for(col=0; col<3; col++)
		{
			         fflush(stdin); fflush(stdout);
					printf("Element [%d][%d]: ", row, col);
					scanf("%f",&original_matrix[row][col]);
		}

	}
	   //the transpose matrix (3*3)
	for(row=0 ;row<3; row++)
	{
		for(col=0; col<3; col++)
		{
			transpose_matrix[col][row]=original_matrix[row][col];
		}
	}

	printf("transpose matrix (3*3):");
		 for(row=0; row<3; row++)
		 {
			for(col=0; col<3; col++)
				 printf("%f",transpose_matrix[row][col]);
		 }
		  printf("\n");

	return EXIT_SUCCESS;
}
/**
   	          ╔═══════════════════════════════════════════════════════════════════════════╗
   	          ║ @user           : Fouad Bahgat Abdallah                                   ║
   	          ║ @date           : 9/9/2024                                                ║
   	          ╚═══════════════════════════════════════════════════════════════════════════╝
   	          */

