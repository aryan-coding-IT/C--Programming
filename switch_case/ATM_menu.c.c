#include <stdio.h>
int main() {
    int balance, choice, amount;
    balance = 5000;

    printf("----ATM Menu----\n");
    printf("Cheak Balance\n");
    printf("Deposit\n");
    printf("Withdraw\n");
    printf("Exit\n\n");

    printf("Enter your choice(1-4):");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Your Balance is:%d", balance);
            break;
        case 2:
            printf("Enter your deposit amount:");
            scanf("%d",&amount);
            printf("Amount deposited successfully:\n");
            printf("Your total balance is: %d\n", balance + amount);
            break;
        case 3:
            printf("Enter withdrawal amount:");
            scanf("%d", &amount);

            if(amount > balance) {
                printf("Insufficient balance\n");
            }
            else if(amount <= balance) {
                printf("withdraw successful\n");
            break;
            }
        case 4:
            printf("Thank you\n");
        break;
        default:
            printf("Invalid choice!\n");
            printf("Enter only (1-4)\n");
    }
    return 0;
}