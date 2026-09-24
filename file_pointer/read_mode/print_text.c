#include <stdio.h>
int main() {
    char ch[1000];
    FILE *fptr;
    fptr = fopen("dta.txt", "r");

    if(fptr==NULL) {
        printf("File is not foud !\n");
        return 0;
    }

    for(;fgets(ch,1000,fptr)!=NULL;) {
        printf("%s",ch);
    }

    fclose(fptr);
    return 0;
}
