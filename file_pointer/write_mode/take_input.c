#include <stdio.h>
int main() {

    int marks;
    char name[50];

    FILE *fptr;
    fptr = fopen( "dta.txt", "w");
    printf("Enter your name:");
    scanf("%s",name);

    printf("Enter your marks:");
    scanf("%d",&marks);

    fprintf(fptr, "Name is:%s\nMarks is:%d\n",name,marks);

    fclose(fptr);
    return 0;
}