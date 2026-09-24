#include <stdio.h>

int countEven(int arr[], int size);
int count = 0;
int main() {
    int i;
    int arr[5];

    printf("Enter 5 numbers:");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    countEven(arr, 5);
    return 0;
}

int countEven(int arr[], int size) {
    int i;
    for(i=0; i<5; i++) {
        if(arr[i] % 2 == 0) {
        count++;
        }
    }

    printf("Even =%d\n", count);
    return count;
}