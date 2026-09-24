#include <stdio.h>

void printString(char arr[]);
int countVowel(char arr[]);

int main() {

    char world[50];

    printf("Enter world :");
    fgets(world, 50, stdin); 
    printf("Vowels is:%d\n",countVowel(world));

   
    countVowel(world);
    return 0;
}
int countVowel(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        if(arr[i]=='a' || arr[i]== 'e' ||arr[i]=='i' ||arr[i]=='o' ||arr[i]=='u' ||arr[i]=='A' ||arr[i]=='E' ||arr[i]=='I' ||arr[i]=='O' ||arr[i]=='U') {
            count++;
        }
    }
   return count;
}