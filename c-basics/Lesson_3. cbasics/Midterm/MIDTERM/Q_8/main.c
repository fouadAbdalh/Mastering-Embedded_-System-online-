#include <stdio.h>

// Code for rotating (inverting) elements of the Matrix

void reverse_arr(int arr[], int size) {
    printf("Reversed Array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[100], i, n;

    printf("Enter the size of the Array: ");
    fflush(stdout);
    scanf("%d", &n);

    if (n > 100 || n < 1) {
        printf("Invalid array size. Please enter a size between 1 and 100.\n");
        return 1;
    }

    printf("Before Reversing.\nArray is: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nAfter Reversing.\n");
    reverse_arr(arr, n);

    return 0;
}
