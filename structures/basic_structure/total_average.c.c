#include <stdio.h>

struct student {
    char name[100];
};
int main() {

    struct student s1;
    float math, science, english;

    printf("Enter student name:");
    scanf("%s",s1.name);

    printf("Enter math marks:");
    scanf("%f",&math);

    printf("Enter science marks:");
    scanf("%f",&science);

    printf("Enter english marks:");
    scanf("%f",&english);

    printf("Total marks =%0.2f\n",math + science + english);
    printf("Average =%0.2f\n",(math + science + english) /3);
    return 0;
}