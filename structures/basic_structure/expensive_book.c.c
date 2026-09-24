#include <stdio.h>

struct book {
    char title[100];
    int price;
};
int main() {

    struct book s1;

    printf("Book 1 info:");
    printf("\nEnter book  title:");
    scanf("%s",s1.title);

    printf("Enter book price:");
    scanf("%d",&s1.price);


     struct book s2;

    printf("\nBook 2 info:");
     printf("\nEnter book  title:");
    scanf("%s",s2.title);

    printf("Enter book price:");
    scanf("%d",&s2.price);

    if(s1.price>s2.price) {
        printf("\nBook Title is:%s\n",s1.title);
        printf("Book price is:%d\n",s1.price);
    }
    else {
        printf("\nBook Title is:%s\n",s2.title);
        printf("Book price is:%d\n",s2.price);
    }

    return 0;
}