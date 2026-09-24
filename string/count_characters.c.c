#include <stdio.h>

void printString(char arr[]);
int countChar(char arr[]);

int main() {

    char world[50];

    printf("Enter world :");
    fgets(world, 50, stdin); 
    printf("Chracters is:%d\n",countChar(world));

   
    countChar(world);
    return 0;
}
int countChar(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        
            count++;
    }
   return count;
}