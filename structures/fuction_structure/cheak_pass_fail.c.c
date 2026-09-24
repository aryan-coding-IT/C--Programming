#include <stdio.h>

struct student {
    char name[100];
    int marks;
};
int cheakResult(struct student s);
int main() {

    struct student s;

    printf("Enter student name & marks:");
    scanf("%s %d",s.name,&s.marks);

    cheakResult(s);
    return 0;
}
int cheakResult(struct student s) {
    if(s.marks>=35) {
        printf("Pass\n");
    }
    else {
        printf("Fail\n");
    }
}