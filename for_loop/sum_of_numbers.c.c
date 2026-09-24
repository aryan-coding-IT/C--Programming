#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);

    for(int i=0; i<=num;i++) {
        sum = sum + i ;
    }
     printf("%d", sum);
    return 0;
}

/* output:
          Enter a number:3
          6
*/