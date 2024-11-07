#include <stdio.h>
int main() {
    int array[100];
    int n,i;
    int max,min;
    printf("input number of elementes to store in the array: ");
    scanf("%d", &n);

    printf("Enter numbers of array elemente: %d\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&array[i]);
    }
    max=array[0];
    min=array[0];
    for(i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    int *a=&max;
    int *b=&min;

    printf("Maximum element: %p\n",a);
    printf("Minimum element: %p\n",b);
    printf("Maximum element: %d\n",*a);
    printf("Minimum element: %d\n",*b);
    return 0;
}