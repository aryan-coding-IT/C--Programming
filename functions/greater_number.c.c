// print greater number which is given by user

#include <stdio.h>
 
 void greater( int a,int b);
 int a, b;
int main() {
    printf("Enter first number:");
    scanf("%d", &a);

     printf("Enter second number:");
     scanf("%d", &b);

     greater( a, b);
        return 0;
    }
     void greater(int a, int b) {
     if(a > b) {
        printf("Greater number is: %d", a);
     }
     else {
        printf("Greater number is: %d", b);
     }
     }

     /* output:
               Enter first number:7
               Enter second number:9
               Greater number is:9
    /*