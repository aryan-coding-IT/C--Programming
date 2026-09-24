#include <stdio.h>
void namaste();
void banjour();

int main() {
    printf("Enter i for indian & f for french:");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i') {
        namaste();
    }
    else if(ch == 'f') {
        banjour();
    }
    else {
        printf("not valid letter! enter only i or f \n");
    }
    return 0;
}
    void namaste() {
        printf("namaste \n");
    }
    void banjour() {
        printf("banjour \n");
    }

    /* output:
              Enter i for indian & f for french:i
              namaste
    */