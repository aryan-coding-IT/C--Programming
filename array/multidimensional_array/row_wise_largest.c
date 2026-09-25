#include <stdio.h>
int main() {
    int i,j;
    int arr[3][3];

    printf("Enter 9 numbers:");
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
    scanf("%d",&arr[i][j]);
    }
    }

    printf("Matrix is:\n");
   for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }

    for(i=0;i<3;i++) {
        int largest = arr[i][0];

        if(arr[i][1] > largest) {
            largest = arr[i][1];
        }
        if(arr[i][2] > largest) {
            largest = arr[i][2];
        }
        printf("Largest %d row number is:%d\n",i+1,largest);
    }

    return 0;
}