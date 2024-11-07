#include <stdio.h>
int main() {
    int array[100];
    int n,i;
    int even,odd;
    printf("input number of elementes to store in the array: ");
    scanf("%d", &n);

    printf("Enter numbers of array elemente: %d\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&array[i]);
    }
    even=array[0];
    odd=array[0];
    for(i=0;i<n;i++){
        if(array[i]%2==0){
        even=array[i];
    } else {
        odd=array[i];
    }
    }
    printf("The even elements: \n");
    for(i=0;i<even;i++){
        printf("%d",even);
    }
    printf("The odd elements: \n");
    for (i = 0; i < odd; i++)
    {
        printf("%d",odd);
    }
    int *a=&even;
    int*b=&odd;
    printf("%p %p\n",a,b);
    printf("%d %d\n",*a,*b);
    return 0;
}