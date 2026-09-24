#include <stdio.h>
struct student{
    char name[50];
    int marks;
};
int main() {
    struct student s[2];
    struct student *ptr;
    int i;

    ptr = s;

    for(i=0;i<2;i++) {
       printf("Enter student %d name & marks:",i+1);
        scanf("%s %d",(ptr+i)->name,&(ptr+i)->marks);
    }
        if((ptr+0)->marks > (ptr+1)->marks) {
            printf("Topper name is:%s\n",(ptr+0)->name);
            printf("Topper marks is:%d\n",(ptr+0)->marks);
        }
        else {
            printf("Topper name is:%s\n",(ptr+1)->name);
            printf("Topper marks is:%d\n",(ptr+1)->marks);
        }
    return 0;
}