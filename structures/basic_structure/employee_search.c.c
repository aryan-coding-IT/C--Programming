#include <stdio.h>

struct employee {
    char name[100];
    int id;
    int salary;
};
int main() {

    struct employee e1,e2,e3;
    int search;

    printf("Employee 1 info:\n");
    printf("\nenter employee name:");
    scanf("%s",e1.name);

   printf("enter employee ID:");
    scanf("%d",&e1.id);

    printf("enter employee salary:");
    scanf("%d",&e1.salary);

    printf("Employee 2 info:\n");
    printf("\nenter employee name:");
    scanf("%s",e2.name);

   printf("enter employee ID:");
    scanf("%d",&e2.id);

    printf("enter employee salary:");
    scanf("%d",&e2.salary);

    printf("Employee 3 info:\n");
    printf("\nenter employee name:");
    scanf("%s",e3.name);

   printf("enter employee ID:");
    scanf("%d",&e3.id);

    printf("enter employee salary:");
    scanf("%d",&e3.salary);

    printf("Enter ID to search:");
    scanf("%d",&search);

    if(search==e1.id) {
        printf("Found:%s,\tsalary: %d\n",e1.name,e1.salary);
    }
    else if(search==e2.id) {
        printf("Found:%s,\tsalary: %d\n",e2.name,e2.salary);
    }
    else if(search==e3.id) {
        printf("Found:%s,\tsalary: %d\n",e3.name,e3.salary);
    }
    else {
        printf("Not found\n");
    }

    return 0;
}