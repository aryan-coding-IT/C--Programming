#include <stdio.h>

struct student {
    char name[100];
    int age;
    float marks;
};
int main() {
    struct student s1;

    printf("Enter student name:");
    scanf("%s", s1.name);

    printf("Enter  student age:");
    scanf("%d",&s1.age);

     printf("Enter student marks:");
    scanf("%f",&s1.marks);

    printf("\nStudent name is:%s\n", s1.name);
    printf("Student age is:%d\n", s1.age);
    printf("Student marks is:%f\n", s1.marks);


    struct student s2;

     printf("\nEnter student name:");
    scanf("%s", s2.name);

    printf("Enter  student age:");
    scanf("%d",&s2.age);

     printf("Enter student marks:");
    scanf("%f",&s2.marks);

    printf("\nStudent name is:%s\n", s2.name);
    printf("Student age is:%d\n", s2.age);
    printf("Student marks is:%f\n", s2.marks);


    return 0;
}