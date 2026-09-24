#include <stdio.h>

int add(int a, int b);      // fuction declaration
int a, b;
int result;

int main() {
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    result = add(a, b);
    printf("Addition is: %d \n", result);
    return 0;
}

int add(int a, int b) {
    result = a + b;
    return result;
}

/* output:
          Enter first number: 6
          Enter second number: 9
          Addition is: 15
*/