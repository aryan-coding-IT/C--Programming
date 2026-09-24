#include <stdio.h>
int main() {
    char name[100];
    FILE *fptr;
    fptr = fopen("dta.txt", "a");

    printf("Enter your name:");
    scanf("%s",name);

    fprintf(fptr,name);
    fclose(fptr);
    return 0;
}