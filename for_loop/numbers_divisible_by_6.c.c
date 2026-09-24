// use continue statement 
#include <stdio.h>
int main()
{
    for(int i=1; i<=10; i+=) {
        if(i % 6 == 0)
        continue;
        printf("%d", i);
    }
    return 0;
}

/* output:
          1 2 3 4 5 7 8 9 10
*/