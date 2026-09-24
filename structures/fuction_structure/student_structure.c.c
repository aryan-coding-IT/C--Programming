#include <stdio.h>

struct student {
    char name[50];
    int age;
    int marks;
};
void display(struct student s);
int main () {

    struct student s1 = {"aryan",18,85};
    display(s1);
    return 0;
}
void display(struct student s) {
    printf("\n---Student info---\n");
    printf("Student name is:%s\tAge is:%d\tmarks is:%d\n",s.name,s.age,s.marks);
}