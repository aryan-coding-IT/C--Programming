#include <stdio.h>
int main() {
    int i; 
    int positive, negative;
    int arr[5];
    int poscount = 0, negcount = 0;

    printf("Enter 5 numbers:");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }
     for(i=0; i<5; i++) {
            if(arr[i] < 0) {
                negcount++;
            }
            else {
                poscount++;
            }
         }
     printf("negative =%d\n", negcount);
     printf("positive =%d\n", poscount);
    return 0;
}