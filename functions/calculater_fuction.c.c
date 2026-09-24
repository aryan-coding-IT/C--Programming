// calculator fuction

#include <stdio.h>

float calculate(float a, float b, char op);         // fuction declaration
float a, b;
char op;
float result;

int main() {
    printf("Enter first number:");
    scanf("%f", &a);

    printf("Enter second number:");
    scanf("%f", &b);

    printf("Enter operator(+,-,*./):");
    scanf("%s",&op);

    result = calculate(a, b, op);           // fuction call
    return 0;
}

float calculate(float a, float b, char c) {
    switch(op) {
        case '+':printf("Addition is:%f\n", a + b);
        break;
        case '-':printf("Subtraction is:%f\n", a - b);
        break;
        case  '*':printf("Multiplication is:%f\n", a * b);
        break;
        case '/':printf("Division is:%f\n", a / b);
        break;
        default:printf("Not valid operator\n");
                printf("Enter only (+,-,*,/)\n");
    }
    return result;
}

/* output:
          Enter first number:6
          Enter second number:4
          Enter operator(+,-,*,/): *
          Multiplication is:24
*/