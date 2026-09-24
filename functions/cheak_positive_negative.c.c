// cheakNumber positive/negative/zero

#include <stdio.h>

int cheakNumber(int num);
int num;
int result;

int main() {
    printf("Enter a number:", &num);
    scanf("%d", &num);

    result = cheakNumber(num);
    return 0;
}

int cheakNumber(int num) {
    if(num > 0) {
        printf("Positive \n", result);
    }
    else if(num < 0) {
        printf("Negative \n", result);
    }
    else{
        printf("Zero \n",result);
    }
    return result;
}

/* output:
          Enter a number: 3
          Positive
*/