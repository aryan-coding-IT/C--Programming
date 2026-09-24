#include <stdio.h>
int main() {

    int i;
    int arr[5];
    int *ptr = arr;
    int sum = 0;

    printf("Enter 5 number:");
    for(i=0; i<5; i++){
        scanf("%d", (ptr + i));
        sum = sum + *(ptr + i);
    }
    printf("Sum =%d\n", sum);
    return 0;
}