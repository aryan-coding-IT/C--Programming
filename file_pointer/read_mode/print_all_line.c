#include <stdio.h>
int main() {
    char ch[1000];
    FILE *fptr;
    fptr = fopen("dta.txt", "r");

    if(fptr==NULL) {
         printf("file not found\n");
         return 0;
    }

    for(;fgets(ch,1000,fptr)!=NULL;) {
         printf("%s\n",ch);
    }
    fclose(fptr);

return 0;
}