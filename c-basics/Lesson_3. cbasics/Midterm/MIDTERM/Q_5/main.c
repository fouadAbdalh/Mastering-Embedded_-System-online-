#include <stdio.h>
//c function to count number of ones in binary number


// Function prototypes
long dec_to_bin(int decimal);
int count_ones_in_binary(long binary);

int main(void) {
    int number;
    long binary;


    printf("Enter an integer number: ");
    fflush(stdout);
    scanf("%d", &number);

    // Convert to binary and count 1's in the binary number
    binary = dec_to_bin(number);
    printf("The number of ones in the binary representation of (%d) is: %d\n", number, count_ones_in_binary(binary));

    return 0;
}

// Function to convert decimal to binary
long dec_to_bin(int decimal) {
    long binary_num = 0;
    int remainder;
    long place_value = 1;

    // Convert decimal to binary
    while (decimal > 0) {
        remainder = decimal % 2;
        binary_num += remainder * place_value;
        place_value *= 10;
        decimal /= 2;
    }

    return binary_num;
}


int count_ones_in_binary(long binary) {
    int count = 0;


    while (binary) {
        if (binary % 10 == 1) {
            count++;
        }
        binary /= 10;
    }

    return count;
}
