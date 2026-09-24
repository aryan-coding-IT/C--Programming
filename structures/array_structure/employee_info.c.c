#include <stdio.h>

struct employee {
    char name[50];
    int id;
    int salary;
};
int main() {

    struct employee s[5];
    int i;

    for(i=0;i<5;i++) {
        printf("Enter Employee %d name, ID, salary: ",i+1);
        scanf("%s %d %d",s[i].name,&s[i].id,&s[i].salary);
    }
     printf("---Employee Information---\n");
    for(i=0;i<5;i++) {
         printf("Employe name:%s\t Employee ID:%d\t Employee salary:%d\n",s[i].name, s[i].id, s[i].salary);
    }
    return 0;
}