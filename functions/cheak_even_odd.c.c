// Even/odd

#include <stdio.h>

int cheakEven(int num);
int num;
int result ;

int main() {
    printf("Enter a number:");
    scanf("%d", &num);

    result = cheakEven(num);
    return 0;
}

int cheakEven(int num) {
    if(num % 2 == 0) {
        printf("Even \n", result);
        return 1;
    }
    else {
        printf("odd \n", result);
        return 0;
    }
}

/* output:
          Enter a number: 8
          Even
*/