#include <stdio.h>

struct student {
    char name[100];
    int marks;
};
int calculate(struct student s1,struct student s2,struct student s3);
int main() {

    struct student s1,s2,s3;
    printf("Enter student name:");
    scanf("%s",s1.name);

    printf("Enter math science & english marks:");
    scanf("%d %d %d",&s1.marks,&s2.marks,&s3.marks);

    calculate(s1,s2,s3);
    return 0;
}

int calculate(struct student s1,struct student s2,struct student s3) {
    int total = s1.marks + s2.marks + s3.marks;
    printf("Total is:%d\n",total);
    printf("Average is:%d\n",total / 3);
}