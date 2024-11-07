#include <stdio.h>

int main() {
    struct student
    {
        int age;
        int roll_number;
        char name[10];
    };
    struct student s1;
    struct student s2;
    printf("enter name of student :");
    scanf("%s",&s1.name);
    printf("enter age of student :");
    scanf("%d",&s1.age);
    printf("enter roll number of student :");
    scanf("%d",&s1.roll_number);
    printf("enter name of student :");
    scanf("%s",&s2.name);
    printf("enter age of student :");
    scanf("%d",&s2.age);
    printf("enter roll number of student :");
    scanf("%d",&s2.roll_number);

    printf("Details of student 1 is :\n name = %s \t roll number =%d \t age = %d\n",s1.name,s1.roll_number,s1.age);
    printf("Details of student 2 is :\n name = %s \t roll number =%d \t age = %d",s2.name,s2.roll_number,s2.age);
    
    return 0;
}