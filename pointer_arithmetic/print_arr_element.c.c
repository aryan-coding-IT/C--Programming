#include <stdio.h>
int main() {

    int i;
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 number:");
    for(i=0; i<5; i++) {
        scanf("%d",(ptr + i));
    }
     printf("Array element =");
    for(i=0; i<5; i++) {
        printf("%d\t", *(ptr + i));
    }

    return 0;
}