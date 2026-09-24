#include <stdio.h>

 void printArray(int arr[], int size);

int main() {
    int i;
    int arr[5];

    printf("Enter 5 numbers:");
    for(i=0; i<5;i++) {
    scanf("%d", &arr[i]);
    }

    printArray(arr, 5);
    return 0;
}
void printArray(int arr[], int size){
    int i;
    printf("Array elements are:");
    for(i=0; i<5; i++) {
        printf("%d\t", arr[i]);
    }
}