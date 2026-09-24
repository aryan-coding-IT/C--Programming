#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    for(int i=1; i<=10;i++) {
        printf("%d\n", num*i);
    }
    return 0;
}

/* output:
          Enter a number:2
          2
          4
          6
          8
          10
          12
          14
          16
          18
          20
*/