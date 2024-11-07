#include <stdio.h>
int main() {
    int a,b,c;
    int*p=&a;
    int*q=&b;
    int*r=&c;

    printf("input number: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("your number is: %p %p %p\n",p,q,r);

    return 0;
}