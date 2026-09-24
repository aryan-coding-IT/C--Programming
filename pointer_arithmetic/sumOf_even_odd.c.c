#include <stdio.h>
int main() {

    int i;
    int arr[5];
    int *ptr = arr;
    int evenSum = 0;
    int oddSum = 0;

    printf("Enter 5 number:");
    for(i=0; i<5; i++) {
        scanf("%d", (ptr + i));
    }
    for(i=0; i<5; i++) {
        if(*(ptr + i) % 2 == 0) {
            evenSum = evenSum + *(ptr + i);
        }
        else {
            oddSum = oddSum + *(ptr + i);
        }
    }
    printf("Even sum = %d\n", evenSum);
    printf("odd sum = %d", oddSum);
    return 0;
}