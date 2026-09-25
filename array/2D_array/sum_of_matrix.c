#include <stdio.h>
int main() {

    int i,j;
    int arr[2][3];
    int sum = 0;

    printf("Enter 6 number:");
    for(i=0;i<2;i++) {
    for(j=0;j<3;j++) {
    scanf("%d",&arr[i][j]);
    }
    }

    printf("Matrix is:\n");
    for(i=0;i<2;i++) {
    for(j=0;j<3;j++) {
    printf("%d ",arr[i][j]);
    sum = sum + arr[i][j];
    }
    printf("\n");
    }
    printf("Sum of matrix is:%d\n",sum);
    return 0;
}