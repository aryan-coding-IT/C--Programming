#include <stdio.h>
int main() {
    int arr[10];
    int i;
    int count = 0;

    printf("Enter 10 numbers:");
    for(i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
        for(i=0;i<10;i++) {
            if(arr[i] % 2 == 0) {
                count++;
            }
        }
        printf("Total Even numbers:%d\n", count);
     return 0;
}