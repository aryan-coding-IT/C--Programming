#include <stdio.h>
int main() {

    int num;
    FILE *fptr;
    fptr = fopen("dta.txt", "r+");

    printf("Enter a number:");
    scanf("%d",&num);

    if(fptr==NULL) {
        printf("file  not found\n");
    }
    else if(num % 2 == 0) {
        fprintf(fptr, "Even number\n");
    }
    else {
        fprintf(fptr, "Odd number\n");
    }
    fclose(fptr);
    return 0;
}