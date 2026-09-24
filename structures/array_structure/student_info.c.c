#include <stdio.h>

struct student {
    char name[50];
    int age;
    float marks;
};
int main() {

    struct student s[3];
    int i;

    for(i=0;i<3;i++) {
    printf("Enter student name, age, marks:",i+1);
    scanf("%s %d %f",s[i].name,&s[i].age,&s[i].marks);
    }

    printf("---stdent Information---\n");
    for(i=0;i<3;i++) {
    printf("student name:%s\t student age:%d\t student marks:%0.2f\n",s[i].name, s[i].age,s[i].marks);
    }
    return 0;
}