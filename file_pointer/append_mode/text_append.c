#include <stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen("dta.txt", "a");

    fprintf(fptr,"World");
    fclose(fptr);
    return 0;
}