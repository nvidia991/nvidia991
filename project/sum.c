#include<stdio.h>
int main(){
    int a,b,sum;
   
    printf("input number: ");
    scanf("%d",&a);
    printf("input second number: ");
    scanf("%d",&b);
    sum= a+b;
    int *z=&sum;
    printf("%d\n",*z);
    printf("%p\n",z);

}