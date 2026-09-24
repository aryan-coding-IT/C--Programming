#include <stdio.h>

struct student {
    char name[50];
    int marks;
};
int main() {
    struct student s[5];
    int i;
    int passCount = 0,failCount = 0;

    for(i=0;i<5;i++) {
        printf("Enter student name & marks:",i+1);
        scanf("%s %d",s[i].name,&s[i].marks);
    }

    for(i=0;i<5;i++) {
        if(s[i].marks>=35) {
            printf("Pass = %s\n",s[i].name);
            passCount++;
        }
        else {
            printf("Fail = %s\n",s[i].name);
            failCount++;
        }
    }

    printf(" Pass Student is:%d\n",passCount);
    printf("fail Student is:%d\n",failCount);
    return 0;
}