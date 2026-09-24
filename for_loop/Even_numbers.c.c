#include <stdio.h>
int main()
{
    int n;
    for(;;) {
        printf("Enter a number:");
        scanf("%d", &n);
        if(n % 2 != 0) {
        break;
    }
    }
    return 0;
}

/* output:
          Enter a number:8
          Enter a number:4
          Enter a number:18
          Enter a number:7
/*