// cheak leap year

#include <stdio.h>

int isLeapyear(int year);       // fuction declaration
int year;
int result;

int main() {
    printf("Enter a year:");
    scanf("%d", &year);

    result = isLeapyear(year);      // fuction call
    return 0;
}

int isLeapyear(int year) {
    if(year % 4 == 0) {                   // fuction defination
    printf("Leap year:%d \n", result);
        return 1;
    }
    else {
        printf("Not leap year: %d \n", result);
        return 0;
    }
}

/* output:
          Enter a number: 2026
          Not leap year
*/