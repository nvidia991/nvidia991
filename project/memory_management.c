#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        perror("Failed to allocate memory");
        return 1; // Exit if allocation fails
    }

    // Initialize and print the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Assign values
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize the array
    int new_size;
    printf("Enter new size for the array: ");
    scanf("%d", &new_size);
    arr = (int *)realloc(arr, new_size * sizeof(int));
    if (arr == NULL) {
        perror("Failed to reallocate memory");
        return 1; // Exit if reallocation fails
    }

    // Initialize new elements
    for (int i = n; i < new_size; i++) {
        arr[i] = i + 1; // Assign new values
    }

    // Print the updated array
    printf("Updated array elements: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);
    return 0;
}