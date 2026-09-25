#include <stdio.h>
int main() {

    int i,j;
    int arr[3][3];
    int countEven = 0;

    printf("Enter 9 number:");
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
    scanf("%d",&arr[i][j]);
    }
    }

    printf("Matrix is:\n");
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
    printf("%d ",arr[i][j]);
        if(arr[i][j] % 2 == 0) {
            countEven++;
        }
    }
    printf("\n");
    }
    printf("Even numbers is:%d\n",countEven);
    return 0;
}