// cheak divisibility

#include <stdio.h>

int cheakDivisible(int a, int b);
int a,b;
int result;

int main() {
    printf("Enter first number:");
    scanf("%d",&a);

     printf("Enter second number:");
     scanf("%d",&b);

    result = cheakDivisible(a, b);
    return 0;
}

int cheakDivisible(int a, int b) {
    if(a % b == 0) {
        printf("Divisible \n", result);
        return 1;
    }
    else {
        printf("Not divisible \n", result);
        return 0;
    }
}

/* output:
          Enter first numbre: 10
          Enter second number: 2
          Divisible
*/