#include <stdio.h>

struct student {
    char name[100];
    int marks;
};
int largestMarks(struct student s1,struct student s2,struct student s3);
int main() {

    struct student s1,s2,s3;

    printf("Enter 1st student name & marks:");
    scanf("%s %d",s1.name,&s1.marks);

    printf("Enter 2nd student name & marks:");
    scanf("%s %d",s2.name,&s2.marks);

    printf("Enter 3rd student name & marks:");
    scanf("%s %d",s3.name,&s3.marks);

    largestMarks(s1,s2,s3);
    return 0;   
}

int largestMarks(struct student s1,struct student s2,struct student s3) {
    if(s1.marks > s2.marks && s1.marks> s3.marks) {
        printf("Topper student is %s with %d marks\n",s1.name,s1.marks);
    }
    else if(s2.marks > s1.marks && s2.marks > s3.marks) {
        printf("Topper student name & marks is:%s %d\n",s2.name,s2.marks);
    }
    else {
        printf("Topper is %s with %d marks:\n",s3.name,s3.marks);
    }
}