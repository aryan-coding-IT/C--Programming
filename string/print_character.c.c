#include <stdio.h>

void printString(char arr[]);

int main() {

    char world[50];

    printf("Enter world :");
    fgets(world, 50, stdin); 

    printString(world);

    return 0;
}
void printString(char arr[]) {
    
    for(int i=0; arr[i] != '\0'; i++) {
        printf("%c\n", arr[i]);
    }
}