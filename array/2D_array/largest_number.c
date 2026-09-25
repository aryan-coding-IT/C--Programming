#include <stdio.h>
int main() {

    int i,j;
    int arr[3][3];
   int largest;

    printf("Enter 9 number:");
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
    scanf("%d",&arr[i][j]);
    }
    }

    largest = arr[0][0];
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        if(arr[i][j] > largest) {
            largest = arr[i][j];
        }
    }
    }
    printf("Matrix is:\n");
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
    printf("%d ",arr[i][j]);
    }
     printf("\n");
    }
    printf("Largest number is:%d\n",largest);
    return 0;
}