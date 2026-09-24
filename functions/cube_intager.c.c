// cube of intager

#include <stdio.h>

int cube(int num);
int num;
int result;

int main() {
    printf("Enter a number:");
    scanf("%d", &num);

    result = cube(num);
    printf("Cube = %d \n", result);
    return 0;
}

int cube(int num) {
    result = num * num * num;
    return result;
}

/* output:
          Enter a number: 5
          Cube = 125
*/
