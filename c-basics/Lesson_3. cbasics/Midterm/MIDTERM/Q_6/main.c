#include <stdio.h>

// Function to return the unique number in an array
int find_unique(int arr[], int size) {
    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique ^= arr[i];  // XOR operation
    }

    return unique;
}

int main() {
    int arr1[] = {4, 2, 5, 2, 5, 7, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Unique number in array 1: %d\n", find_unique(arr1, size1));

    int arr2[] = {4, 2, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Unique number in array 2: %d\n", find_unique(arr2, size2));

    return 0;
}
