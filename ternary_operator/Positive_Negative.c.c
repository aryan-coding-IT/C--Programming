#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    num >= 0? printf("positive \n"):printf("negative");

    return 0;
}

/* output:
          Enter a number: 5
          positive
*/