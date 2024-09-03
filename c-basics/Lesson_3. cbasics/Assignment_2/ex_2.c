/**
  ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh 
 ||@ Description          : check vowel or consonant 
 ||@ Course               : Embedded_System_Online_Diplome 
  ==============================================================================
 */

#include <stdio.h>

int main() {
	char ch;

	// Prompt the user to enter a character
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &ch);

	// Check if the character is a vowel
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		printf("%c is a vowel.\n", ch);
	}
	else {
		// If not a vowel, check if it's a letter
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
			printf("%c is a consonant.\n", ch);
		} else {
			// If it's not a letter
			printf("%c is not a letter.\n", ch);
		}
	}

	return 0;
}

// Another way

#include <stdio.h>

int main() {
	char ch;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &ch);

	switch (ch) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		printf("%c is a vowel.\n", ch);
		break;
	default:
		printf("%c is a consonant.\n", ch);
	}

	return 0;
}

/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */


