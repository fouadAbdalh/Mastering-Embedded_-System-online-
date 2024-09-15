/**
 ╔═══════════════════════════════════════════════════════════════════════════
 ║ @file           : main.c
 ║ @author         : Fouad Bahgat Abdallah
 ║ @brief          :finding prime numbers between two intervals using a user-defined function in C,
 ║ @course         : Embedded System Online Diploma
 ╚═══════════════════════════════════════════════════════════════════════════
 */

#include <stdio.h>
#include <stdlib.h>
int  prime (int num);

int main(void) {

	int low , high;
	printf("Enter two numbers:");
	fflush(stdin);   fflush(stdout);
	scanf("%d%d", &low,&high);
	printf("Prime numbers between %d and %d are: ", low, high);
	for (int i = low + 1; i < high; i++) {
	        if (prime(i))
	            printf("%d ", i);
	    }

	return EXIT_SUCCESS;
}
int  prime (int num)
{

	 if (num <= 1)
	        return 0;
	    for (int i = 2; i <= num / 2; i++) {
	        if (num % i == 0)
	            return 0;
	    }
	    return 1;



 return 1;
}
/**
   	          ╔═══════════════════════════════════════════════════════════════════════════╗
   	          ║ @user           : Fouad Bahgat Abdallah                                   ║
   	          ║ @date           : 15/9/2024                                               ║
   	          ╚═══════════════════════════════════════════════════════════════════════════╝
   	          */

