#include <stdio.h>
int main() {
    int sum;
    int arr[5];
    int i;

    printf("Enter 5 numbers:");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    for(i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSum of array:%d\n",sum);
     return 0;
}