/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          :c programming  search element in array
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */

#include <stdio.h>
#include <stdlib.h>

 int numbers[20];
    int index, low, middle, high, target, size;
   int main(void) {


	 printf("Enter the size of the arry");
	 fflush(stdin); fflush(stdout);
	 scanf("%d",&size);

	 printf("Enter the elements of the array\n");
	 for(index=0; index<size; index++)
	 {
		 fflush(stdin); fflush(stdout);
		 scanf("%d",&numbers[index]);
	 }

	 printf("Enter the value to search for\n");
	 fflush(stdin); fflush(stdout);
	 scanf("%d", &target);

	  /*  Binary search begins */
	 low=0;
	 high = size-1;

	 while (low <= high) {
	        middle = (low+ high) / 2;

	        if (target == numbers[middle]) {
	            printf("SUCCESSFUL SEARCH\n");
	            return;
	        }

	        if (target < numbers[middle])
	            high = middle - 1;
	        else
	            low = middle + 1;
	    }

	    printf("UNSUCCESSFUL SEARCH\n");
	}
   return 0;
   }
   /**
   	          ╔═══════════════════════════════════════════════════════════════════════════╗
   	          ║ @user           : Fouad Bahgat Abdallah                                   ║
   	          ║ @date           : 9/9/2024                                                ║
   	          ╚═══════════════════════════════════════════════════════════════════════════╝
   	          */

