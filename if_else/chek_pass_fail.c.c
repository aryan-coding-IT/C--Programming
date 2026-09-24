#include <stdio.h>
int main()
{
    int mark;
    printf("Enter marks:");
    scanf("%d", &mark);

    if(mark >= 40) {
        printf("pass \n");
    }
    else {
        printf("fail");
    }
    return 0;
}

/* output:
          Enter marks:45
        pass
*/