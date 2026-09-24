#include <stdio.h>
int main() {
    int value, choice;

    printf("---Menu---\n");
    printf("Kilometer = Meter\n");
    printf("meter = Centimeter\n");
    printf("Kilogram = Gram\n");
    printf("Celcius = Fahrenheit\n\n");


    printf("Enter your choice(1-4):");
    scanf("%d", &choice);


    switch(choice) {
        case 1:
            printf("Enter Kilometer value:");
            scanf("%d", &value);
            printf("Meter = %d\n",value * 1000 );
        break;
        case 2:
            printf("Enter meter value:");
            scanf("%d", &value);
            printf("Centimeter = %d\n", value * 100);
        break;
        case 3:
           printf("Enter Kilogram value:");
           scanf("%d", &value);
           printf("Gram = %d\n", value * 1000);
        break;
        case 4:
            printf("Enter Fahrenheight value:");
            scanf("%d", &value);
            printf("Celcius = %d\n", (value - 32) * 5/9);
        break;
        default: 
            printf("Invalid choice!\n");
    }

    return 0;
}