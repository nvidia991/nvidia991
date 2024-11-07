#include <stdio.h>

int main() {
    int array[100];
    int n;

    printf("input number of elementes to store in the array: ");
    scanf("%d", &n);
   for (int i = 0; i < n; i++) {
        printf("Enter numbers of array elemente:");
        scanf("%d", &array[i]);
    }
    printf("The numbers in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    return 0;
}
