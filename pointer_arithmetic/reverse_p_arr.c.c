#include <stdio.h>
int main() {

    int i; 
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 numbers:");
    for(i=0; i<5; i++) {
        scanf("%d", (ptr + i));
    }
    printf("Reverse =");
    for(i=4; i>=0; i--) {
        printf("%d \t", *(ptr + i));
    }
    return 0;
}