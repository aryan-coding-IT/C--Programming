#include <stdio.h>

struct student {
    char name[50];
    float marks;
};
int main() {

    struct student s[5];
    int i;
    int topper = 0;

    for(i=0;i<5;i++) {
        printf("Enter student %d name & marks: ",i+1);
        scanf("%s %f", s[i].name,&s[i].marks);
    }

    printf("\n---All Student---\n");
    for(i=0;i<5;i++) {
        printf("name=%s\t Marks=%.2f\n",s[i].name,s[i].marks);
    }

    for(i=0;i<5;i++) {
        if(s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("\nTopper is %s with %.2f marks\n",s[topper].name,s[topper].marks);

    return 0;
}