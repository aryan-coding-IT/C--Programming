#include <stdio.h>
int main() {
    int  num[5];
    int sum = 0;
    FILE *fptr;
    fptr = fopen("dta.txt", "r");

    if(fptr==NULL) {
        printf("file not found");
        return 0;
    }

    for(int i=0;i<5;i++) {
        fscanf(fptr,"%d",&num[i]);
        sum = sum + num[i];
    }
    printf("sum =%d\n",sum);
    fclose(fptr);
    return 0;
}
