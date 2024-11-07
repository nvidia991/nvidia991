#include <stdio.h>
int main() {
    int array[100];
    int array2[100];
    int n,x,i;

    printf("input number of elementes to store in the first array: ");
    scanf("%d", &n);

    printf("Enter numbers of array elemente: \n");
    for(i=0;i<n;i++){
    scanf("%d",&array[i]);
    }
    printf("input number of elementes to store in the second array: ");
    scanf("%d", &x);

    printf("Enter numbers of array elemente: \n");
    for(i=0;i<x;i++){
    scanf("%d",&array2[i]);
    }
    return 0;
}