#include <stdio.h>
int main() {
    int num[5];
    FILE *fptr;
    fptr = fopen("dta.txt", "w");
    printf("Enter 5 numbers:");
    for(int i=0;i<5;i++) {
        scanf("%d",&num[i]);
    }

    fprintf(fptr, "Numbers is:%d %d %d %d %d\n",num[0],num[1],num[2],num[3],num[4]);

    fclose(fptr);
    return 0;
}