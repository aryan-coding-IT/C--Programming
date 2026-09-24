#include<stdio.h>
int main()
{
    int day;
    printf("Enter day (1-7):");
    scanf("%d", &day);

    switch(day) {
        case 1: printf("Monday \n");
        break;
        case 2: printf("Tuesday \n");
        break;
        case 3: printf("Wensday \n");
        break;
        case 4: printf("Thursday \n");
        break;
        case 5: printf("friday \n");
        break;
        case 6: printf("saturday \n");
        break;
        case 7: printf("Sunday \n");
        break;
        default: printf("Not a valid day");
    }
    return 0;
}

/* output:
          Enter day (1-7): 7
          Sunday
/*