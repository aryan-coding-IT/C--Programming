#include <stdio.h>
int main() {
    int a,b, c;

    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    printf("Enter third number:");
    scanf("%d", &c);

    a > b && a > c? printf("Greater number is:%d\n", a): b > a && b > c? printf("Greater number is:%d\n", b): c > a && c > b? printf("Greater number is:%d\n", c):printf("");
    return 0;
}