#include <stdio.h>

void printString(char arr[]);
int countLength(char arr[]);

int main() {

    char fullName[100];

    printf("Enter your full name:");
    fgets(fullName, 100, stdin);
    printf("Your full name is:");
    puts(fullName);
    printf("Length is:%d\n", countLength(fullName));

    return 0;
}
int countLength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;
    }
    return count-1;
}