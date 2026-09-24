#include <stdio.h>

struct employee {
    int id;
    char name[50];
};
int main() {

    struct employee e[5];
    int i;
    int search;

    for(i-0;i<5;i++) {
        printf("Enter Employee %d name & ID:",i+1);
        scanf("%s %d",e[i].name,&e[i].id);
    }

    printf("Enter search ID:");
    scanf("%d",&search);

    for(i=0;i<5;i++) {
        if(e[i].id==search) {
            printf("Found\n");
            printf("Employee ID = %d\nName= %s\n",e[i].id,e[i].name);
            return 0;
        }
        }
    printf("ID %d not found",search);
    return 0;
}