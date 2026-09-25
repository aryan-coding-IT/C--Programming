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

    printf("Main diagonal:\n");
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        if(i==j) {
            printf("%d ",arr[i][j]);
        }
    }
    }

    printf("\nSecondary Diagonal:\n");
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
        if(i+j == 2) {
            printf("%d ",arr[i][j]);
            printf("\n");
        }
    }
    }
    return 0;
}