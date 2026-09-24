#include <stdio.h>

struct employee {
    char name[50];
    int salary;
    int id;
};
int main() {

    struct employee e[5];
    int i;
    int lowest = 0;

    for(i=0;i<5;i++) {
        printf("Enter employee  name id salary:");
        scanf("%s %d %d",e[i].name,&e[i].id,&e[i].salary);
    }

    for(i=0;i<5;i++) {
        if(e[i].salary <e[lowest].salary) {
            lowest = i;
        }
    }

    printf("\n---Lowest salay Employee---\n");
    printf("ID = %d\nName = %s\nSalary = %d\n",e[lowest].id,e[lowest].name,e[lowest].salary);
    return 0;
}