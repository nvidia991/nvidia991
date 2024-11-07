#include <stdio.h>
int main() {
    int n,i;
    int sum;
    printf("input number of elementes to store in the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter numbers of array elemente: %d\n",n);
    for (i = 0; i < n; i++) {  
    scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++) {
        sum += (array[i]);
    }
     int *a=&sum;
    printf("%p",a);
    printf("Sum of all elements stored in the array is: %d\n",*a);
    
return 0;
}
