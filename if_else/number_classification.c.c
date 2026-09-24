 #include <stdio.h>
int main() { 
    int  num;

    printf("Enter a number:");
    scanf("%d",&num);

    if(num > 0 ) {
        printf("positive\n");
    }
    else if(num < 0 ) {
        printf("Negative\n");
    }
    else if (num == 0) {
        printf("Zero\n");
        }
         if(num % 2 == 0) {
            printf("Even\n");
        }
        else {
            printf("odd\n");
        }

         if(num % 5 == 0) {
            printf("Divisible by 5\n");
        }
    
    
    return 0;
}