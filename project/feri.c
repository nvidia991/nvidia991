#include<stdio.h>
int main(){
    int arrey[20];
    int n;
    printf("enter a number of arrey: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter a number: ");
        scanf("%d",&arrey[i]);
    }
    for(int i=0;i<n;i++){
        printf("your number is: %d\n",arrey[i]);
    }
    int *a=&n;
    printf("%p",a);
    printf("%d",*a);
    return 0;
}