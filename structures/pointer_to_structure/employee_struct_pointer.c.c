#include <stdio.h>

struct student {
    char name[50];
    int id;
    int salary;
};
int main() {

    struct student s1 = {"aryan",123456,30000};

    struct student *ptr = &s1;
    printf("Student name is:%s\n",(*ptr).name);
    printf("Student ID is:%d\n",(*ptr).id);
    printf("Student salary is:%d\n",(*ptr).salary);
    return 0;
}

