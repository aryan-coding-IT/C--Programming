// subtract two intagers 

#include <stdio.h>

int sub(int a, int b);      //fuction declaration
int a, b;
int result;

int main() {
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    result = sub( a, b);     // fuction call
    printf("Subtraction is: %d \n", result);
    return 0;
}

int sub(int a, int b) {
    result = a - b;
    return result;
}

/* output:
          Enter first number:8
          Enter second number:5
          Subtraction is: 3
*/