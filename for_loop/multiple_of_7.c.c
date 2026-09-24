// use break statement
#include <stdio.h>
int main()
{
   int n;

   for(;;)  {
    printf("Enter a number:");
    scanf("%d", &n);
    if(n % 7 != 0) {
     break;
   }
   }
    return 0;
}

/* output;
          Enter a number:7
          Enter a number:49
          Enter a number:42
          Enter a number:8
*/