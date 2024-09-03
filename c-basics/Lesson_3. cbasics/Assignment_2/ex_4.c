
 /**
 ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh
 ||@ Description          :  c program to chack whether a charactor is an alphabat
 ||@ Course               : Embedded_System_Online_Diplome
 ==============================================================================
 */
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}

/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */

