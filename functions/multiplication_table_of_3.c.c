#include <stdio.h>

int sum(int a, int b);
void printTable(int n);

int main() {
    int n;
    printf("Enter  number:");
    scanf("%d", &n);

    printTable(n); // argument

return 0;
}

int sum(int x, int y) {
    return x + y;
}

void printTable(int n) { // formal parameter
    for(int i=1;i<=10;i++) {
        printf("%d ",i * n);
    }
}

/* output:
          Enter number:3
          3 6 9 12 15 18 21 24 27 30
/*