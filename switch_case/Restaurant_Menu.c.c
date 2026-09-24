#include <stdio.h>
int main() {
    int choice, total, quantity = 0;

    printf("----Restaurant Menu----\n");
    printf("Pizza Rs.200\n");
    printf("Burger Rs.120\n");
    printf("Sandwich Rs.100 \n");
    printf("Pasta Rs.150\n\n");


    printf("Enter your choice(1-4):");
    scanf("%d", &choice);

    printf("Enter quantity:");
    scanf("%d", &quantity);

    switch(choice) {
        case 1:
            total = 200 * quantity;
            printf("You ordered %d Pizza\n", quantity);
        break;
        case 2:
            total = 120 * quantity;
            printf("You ordered %d Burger\n", quantity);
        break;
        case 3:
            total = 100 * quantity;
            printf("You ordered %d sandwich\n", quantity);
        break;
        case 4:
            total = 150 * quantity;
            printf("You ordered %d pasta\n", quantity);
        break;
        default :
            printf("Invalid choice!\n");
            return 0;
    }
    printf("Total bill = Rs.%d\n", total);
    
    return 0;
}