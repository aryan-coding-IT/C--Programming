#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    int marks;
};
int main() {
    struct student s[5];
    int i;
    int search[50];

    for(i=0;i<5;i++) {
        printf("Enter student %d name age marks:",i+1);
        scanf("%s %d %d",s[i].name,&s[i].age,&s[i].marks);
    }

    printf("Enter search name:");
    scanf("%s",search);

    for(i=0;i<5;i++) {
        if(strcmp(s[i].name,search)==0) {
            printf("found\n");
            printf("Student name is:%s\n",s[i].name);
            printf("student age is:%d\nstudent marks is:%d\n",s[i].age,s[i].marks);
            return 0;
        }
    }
    printf("Not found\n");
    return 0;
}