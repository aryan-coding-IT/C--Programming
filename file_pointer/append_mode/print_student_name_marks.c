#include <stdio.h>
int main() {
    char name[100];
    int marks;
    FILE *fptr;
    fptr = fopen("dta.txt", "a");

    printf("Enter your name:");
    scanf("%s",name);

    printf("Enter your marks:");
    scanf("%d",&marks);

    fprintf(fptr, "\nstudent name is:%s\nStudent marks is:%d\n",name,marks);
    fclose(fptr);
    return 0;
}