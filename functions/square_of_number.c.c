#include <stdio.h>

int square(int n);      // fuction declaration
int num;
int result;

int main() {
    printf("Enter a number:");
    scanf("%d", &num) ;

    result = square(num);       // fuction call
    printf("Square is: %d \n",result);
    return 0;
}

int square(int n) {     //fuction defination
    result = n * n;
    return result;
}

/* output:
          Enter a number: 5
          Square is: 25
*/