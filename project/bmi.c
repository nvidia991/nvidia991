#include<stdio.h>
int main(){
    float weight,hight,bmi;
    printf("Enter the weight in kilograms: ");
    scanf("%f",&weight);
    printf("Enter the hight in meaters: ");
    scanf("%f",&hight);
    bmi= weight/(hight*hight);
    printf("your bmi is: %.2f\n",bmi);
    return 0;
}