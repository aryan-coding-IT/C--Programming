#include <stdio.h>

int main() {

   char fullName[100];

   printf("Enter your full name:");
   fgets(fullName, 100, stdin);
   printf("Your name is:");
   puts(fullName);

    return 0;

}