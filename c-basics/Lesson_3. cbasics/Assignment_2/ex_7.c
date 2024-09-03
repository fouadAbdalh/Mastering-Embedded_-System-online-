/**
  ==============================================================================
 ||@ file                 : main.c
 ||@ author               : fouad bahgat Abdallh
 ||@ Description          : c program make simple basic calculator
 ||@ Course               : Embedded_System_Online_Diplome
 ==============================================================================
 */


#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt the user to enter an operator and two numbers
    printf("Enter an operator (+, -, *, /): ");
    fflush(stdin); fflush(stdout);
    scanf(" %c", &operator);  // The space before %c is to ignore any whitespace characters
    printf("Enter two numbers: ");
    fflush(stdin); fflush(stdout);
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            // Check if the divisor is not zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            // Handle invalid operator input
            printf("Error! Operator is not correct.\n");
            break;
    }

    return 0;
}

/**
 ==============================================================================
 = @user           : Fouad Bahgat Abdallah
 = @date           : 3/9/2024
 ==============================================================================
 */
