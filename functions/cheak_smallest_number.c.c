// cheak smallest number 

#include <stdio.h>

int smallest(int a, int b, int c);      // fuction declaration
int a, b, c;     
int result;

int main() {
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    printf("Enter third number:");
    scanf("%d", &c);

    result = smallest(a, b, c);     // fuction call
    printf("Smallest number is : %d\n",result);
    return 0;
}

int smallest(int a, int b, int c) {
    if(a < b && a < c) {
        return a;
    }
    else if(b < a && b < c) {
        return b;
    }
    else {
        return c;
    }
    return result;
}

/* output:
          Enter first number: 9
          Enter second number: 3
          Enter third number: 6
          Smallest number is: 3
*/