// cheak largest number

#include <stdio.h> 

int maximum(int a, int b, int c);
int a,b,c;
int result;

int main() {
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    printf("Enter third number:");
    scanf("%d", &c);

    result = maximum(a, b, c);
    return 0;
}

int maximum(int a, int b, int c) {
    if(a > b && a > c) {
        result =a;
    }
    else if(b > a && b > c) {
        result =b;
    }
    else {
        result =c;
    }
    printf("Largest number is:%d \n", result);
    return result;
}

/* output:
          Enter first number: 9
          Enter second number: 10
          Enter third number: 4
          Largest number is: 10
*/