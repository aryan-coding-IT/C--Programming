#include <stdio.h>

int sum(int a, int b);

int main() {
    int a, b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);


int s = sum(a, b);
printf("sum is : %d", s);
return 0;
}

int sum(int x, int y) {
    return x + y;
}

/* output:
          Enter first number:4
          Enter second number:6
          sum is : 10
*/