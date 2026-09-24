#include<stdio.h>
int main()
{
    int unit;
    printf("Enter units:");
    scanf("%d",&unit);

    if(unit <= 100) {
        printf("5 rupees per unit\n");
    }
    else if (unit <= 200) {
        printf("7 rupees per unit\n");

    }
    else if (unit >= 201) {
        printf("10 rupees per unit\n");
    }
    else {

    }
    return 0;
}

/* output:
         Enter units:210
         10 rupees per unit
*/
