
    #include <stdio.h>

struct hightest {
    char name[100];
    int marks;
};
int main() {
    struct hightest s1;

    printf("student 1 info:\n");
    printf("\nEnter student name:");
    scanf("%s",s1.name);

    printf("Enter student marks:");
    scanf("%d",&s1.marks);


    struct hightest s2;
     printf("student 2 info:\n");
    printf("\nEnter student name:");
    scanf("%s",s2.name);

    printf("Enter student marks:");
    scanf("%d",&s2.marks);


    struct hightest s3;
     printf("student 3 info:\n");
    printf("\nEnter student name:");
    scanf("%s",s3.name);

    printf("Enter student marks:");
    scanf("%d",&s3.marks);
    printf("\n");
    if(s1.marks>s2.marks && s1.marks>s3.marks) {
        printf("Hightest marks student name:%s\n", s1.name);
        printf("Hightest  student marks:%d\n", s1.marks);
    }
    else if(s2.marks>s1.marks && s2.marks>s3.marks) {
        printf("Hightest marks student name:%s\n", s2.name);
        printf("Hightest  student marks:%d\n", s2.marks);
    }
    else {
        printf("Hightest marks student name:%s\n", s3.name);
        printf("Hightest  student marks:%d\n", s3.marks);
    }
    return 0;
}