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

    printf("\nOutput\n");
    for(i=0;i<3;i++) {
     int rowSum = 0;
     for(j=0;j<3;j++) {
      rowSum = rowSum + arr[i][j];
     }
     printf("Row %d Sum is = %d\n",i+1,rowSum);
    }
    return 0;
}