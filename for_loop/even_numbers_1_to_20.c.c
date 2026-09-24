#include <stdio.h>
int main()
{
    for(int i=0;i<=20; i++) {
        if(i % 2 == 0) {
        printf("%d\n", i);
    }
    }
    return 0;
}

/* output:
          0
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
/*