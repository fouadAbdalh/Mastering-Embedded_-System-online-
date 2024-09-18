#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverse_String(char str[]) {
    int len = strlen(str);
    int start = 0, end = len - 1;


    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }


    printf("\nReversed String is: %s\n", str);
}

int main() {
    char str[100];

    printf("Please Enter any String: ");
    fflush(stdout);
    fgets(str, sizeof(str), stdin);


    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    reverse_String(str);

    return 0;
}
