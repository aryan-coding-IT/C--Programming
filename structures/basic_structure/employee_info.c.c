
#include <stdio.h>

struct employee {
        char name[100];
        int id;
        int salary;
};
int main() {
    struct employee s1;

    printf("Enter Employee name:");
    scanf("%s",s1.name);

    printf("Enter Employee ID:");
    scanf("%d",&s1.id);

    printf("Enter Employee salary:");
    scanf("%d",&s1.salary);

    printf("\nEmployee name is:%s\n", s1.name);
    printf("Employee ID is:%d\n", s1.id);
    printf("Employee salary is:%d\n", s1.salary);
   
    return 0;
}