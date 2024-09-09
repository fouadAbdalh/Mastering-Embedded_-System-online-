/**
 ╔═══════════════════════════════════════════════════════════════════════════╗
 ║ @file           : main.c                                                  ║
 ║ @author         : Fouad Bahgat Abdallah                                   ║
 ║ @brief          : Example of Multidimensional Array in C                  ║
 ║ @course         : Embedded System Online Diploma                          ║
 ╚═══════════════════════════════════════════════════════════════════════════╝
 */

#include <stdio.h>
#include <stdlib.h>
 float matrix_1[2][2], matrix_2[2][2], sum[2][2];
 int row, col;

int main(void) {
	printf("Enter the element of matrix_1\n");
	for(int row=0 ;row<2 ;row++)
	{
		for (col=0; col<2; col++)
		{
			printf("Enter matrix_1%d%d", row+1 , col+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&matrix_1[row][col]);
		}
	}
	 printf("Enter the element of matrix_2:|n");
	 for(row=0; row<2; row++)
	 {
		 for(col=0; col<2; col++)
		 {
			  printf("Enter matrix_2%d%d", row+1 , col+1);
			  fflush(stdin); fflush(stdout);
			  scanf("%f",&matrix_2[row][col]);
		 }
	 }

	 printf("Enter the element of matrix_2:|n");
	 	 for(row=0; row<2; row++)
	 	 {
	 		 for(col=0; col<2; col++)
	 		 {
	 		  sum[row][col]= matrix_1[row][col] + matrix_2[row][col];

	 		 }
	 	 }
	 	  printf("summing of the matrixes\n ");
	 	  for(row=0; row<2; row++)
	 	  {
	 		 for(col=0; col<2; col++)
	 		 {
	 			 printf("%.2f\t", sum[row][col]);
	 		 }
	 	  }
	 	  printf("\n");
	return EXIT_SUCCESS;
}
