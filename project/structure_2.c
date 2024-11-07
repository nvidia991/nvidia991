#include <stdio.h>

int main() {
    struct sam
    {
       char address[20];
       int number;
       char name[10];
    };
    struct sam one;
    struct sam two;
    struct sam three;

    printf("enter name of person 1: ");
    scanf("%s",&one.name);
    printf("enter address of person 1: ");
    scanf("%s",&one.address);
    printf("enter number of person 1: ");
    scanf("%d",&one.number);

    printf("enter name of person 2: ");
    scanf("%s",&two.name);
    printf("enter address of person 2: ");
    scanf("%s",&two.address);
    printf("enter number of person 2: ");
    scanf("%d",&two.number);

    printf("enter name of person 3: ");
    scanf("%s",&three.name);
    printf("enter address of person 3: ");
    scanf("%s",&three.address);
    printf("enter number of person 3: ");
    scanf("%d",&three.number);
    
    printf("name of person 1 is %s\t address is %s\t phone number is %d\n",one.name,one.address,one.number);
    printf("name of person 2 is %s\t address is %s\t phone number is %d\n",two.name,two.address,two.number);
    printf("name of person 3 is %s\t address is %s\t phone number is %d\n",three.name,three.address,three.number);
    
    return 0;
}