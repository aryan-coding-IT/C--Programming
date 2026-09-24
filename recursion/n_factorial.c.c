// factorial of n

#include <stdio.h>

int fact(int n);

int main() {
    printf("Factorial is:%d\n", fact(5));
    return 0;
}

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    int factNm = fact(n-1);
    int factN = factNm * n;
    return factN;
}

// output:
//        Factorial is: 120