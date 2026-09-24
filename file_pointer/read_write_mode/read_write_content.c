#include <stdio.h>
int main() {
    char content[100];
    FILE *fptr;
    fptr = fopen("dta.txt", "r+");

    if(fptr==NULL) {
        printf("file not found\n");
    }

    printf("Write extra content:");
    fgets(content,100,stdin);
    fprintf(fptr,"%s",content);

    fclose(fptr);
    return 0;
}