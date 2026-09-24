#include <stdio.h>

struct student {
    char name[100];
    int marks;
};
int compare(struct student s1,struct student s2);
int main() {

    struct student s[2];
    int i;

    for(i=0;i<2;i++) {
    printf("Enter student %d name & marks:",i+1);
    scanf("%s %d",s[i].name,&s[i].marks);
    }

    int compare(struct student s1, struct student s2);
    compare (s[0],s[1]);
    return 0;
}

int compare(struct student s1,struct student s2) {

        if(s1.marks > s2.marks) {
            printf("Topper Student name is:%s\nTopper student marks is:%d\n",s1.name,s1.marks);
    }
    else {
        printf("Topper Student name is:%s\nTopper student marks is:%d\n",s2.name,s2.marks);
    }
}