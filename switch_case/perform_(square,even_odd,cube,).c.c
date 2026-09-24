#include <stdio.h>
int main()
{
    int choice, num;
    printf("--- Menu ---\n");
    printf("Find square\n");
    printf("Find cube\n");
    printf("Cheak Even/odd\n");
    printf("Exit\n");

    printf("Enter your choice:");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a number:");
            scanf("%d", &num);
            printf("Square =%d", num * num);
            break;
        case 2:
            printf("Enter a number:");
            scanf("%d", &num);
            printf("Cube =%d", num * num * num);
            break;
        case 3:
            printf("Enter a number:");
            scanf("%d", &num);
            if(num % 2 ==0) {
                printf("Even number");
            } else {
                printf("Odd number");
                }
            break;
        case 4:
            printf("Exiting....");
            break;
        default:
            printf("Invalid choice! Enter 1 to 4 only");
    }
    return 0;
}

/* output:
          --- Menu ---
          Find square
          Find cube
          Cheak Even/odd
          Exit
          Enter your choice:3
          Enter a number:3
          odd number
*/

