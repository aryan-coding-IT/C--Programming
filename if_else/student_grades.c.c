#include <stdio.h>
int main()
{
    int mark;
    printf("Enter marks:");
    scanf("%d", &mark);

    if(mark < 30) {
        printf("C \n", mark);
    }
    else if(mark >= 30 && mark < 70) {
        printf("B \n", mark);
    }
    else if(mark >= 70 && mark < 90) {
        printf("A \n");
    }
   
    else {
        printf("A+ \n");
    }

    return 0;
}

/* output:
          Enter marks:
          A+
*/
