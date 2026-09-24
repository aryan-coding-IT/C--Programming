#include <stdio.h>
int main() {

    int i;
    int arr[5];
    int *ptr = arr;
    int largest;

    printf("Enter 5 number:");
    for(i=0; i<5; i++) {
        scanf("%d", (ptr + i));
    }
    largest = *ptr;
    for(i=0; i<5; i++) {
        if(*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }
    printf("Largest number =%d\n",largest);
    return 0;
}