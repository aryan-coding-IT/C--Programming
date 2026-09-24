#include <stdio.h>
int main() {

    int n1, n2;
    FILE *fptr;
    fptr = fopen("dta.txt", "r+");
    printf("Enter first number:");
    scanf("%d",&n1);

    printf("Enter second number:");
    scanf("%d",&n2);

    if(fptr==NULL) {
        printf("file not found\n");
    }
    else {
        fprintf(fptr, "Sum = %d\n", n1 + n2);
    }

    fclose(fptr);
    return 0;
}