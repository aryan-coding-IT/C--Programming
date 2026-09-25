#include <stdio.h>
int main() {
    int arr[3][3];
    int i,j;

    printf("Enter 9 numbers:");
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        scanf("%d",&arr[i][j]);
    }
    }

    printf("Matrix is:\n");
     for(i=0;i<3;i++) {
     for(j=0;j<3;j++) {
        printf("%d ", arr[i][j]);
     }
     printf("\n");
     }

     for(i=0;i<3;i++) {
        int columnSum = 0;
     for(j=0;j<3;j++) {
        columnSum = columnSum + arr[j][i];
     }
     printf("Column %d sum is:%d\n",i+1,columnSum);
     }
    return 0;
}