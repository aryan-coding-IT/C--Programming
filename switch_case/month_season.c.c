#include <stdio.h>
int main() {
    int month;

    printf("Enter month(1-12):");
    scanf("%d", &month);

    switch(month) {
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Summer\n");
        break;
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Monson\n");
        break;
        case 10:
        case 11:
        case 12:
        case 1:
            printf("Winter\n");
        break;
        default:
            printf("Invalid month\n");
            printf("Enter only(1-12)\n");
    }
    return 0;
}