#include <stdio.h>

int printLargesr(int arr[], int size);
int largest = 0;

int main() {
    int i;
    int arr[5];

    printf("Enter 5 number:");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printLargest(arr, 5);
    return 0;
}

int printLargesr(int arr[], int size) {
    int i;
    for(i=0; i<5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest element is:%d\n", largest);
    return largest;
}