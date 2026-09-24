#include <stdio.h>
int main() {


    FILE *fptr;
    fptr = fopen("dta.txt", "w");

    fprintf(fptr, "Hello C");

    fclose(fptr);
    printf("File created\n");
    return 0;
}