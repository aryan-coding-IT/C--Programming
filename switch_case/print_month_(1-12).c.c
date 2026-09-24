#include <stdio.h>
int main()
{
    int month;
    printf("Enter month(1-12):");
    scanf("%d", &month);

    switch(month) {
        case 1: printf("january \n");
        break;
        case 2: printf("February \n");
        break;
        case 3: printf("March \n");
        break;
        case 4: printf("April \n");
        break;
        case 5: printf("May \n");
        break;
        case 6: printf("June \n");
        break;
        case 7: printf("july \n");
        break;
        case 8: printf("Ogust \n");
        break;
        case 9: printf("Saptember \n");
        break;
        case 10: printf("Octomber \n");
        break;
        case 11: printf("November \n");
        break;
        case 12: printf("December\n");
        break;
    }
    return 0;
}

/* output:
          Enter month(1-12):6
          June
*/