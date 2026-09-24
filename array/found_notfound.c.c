 #include <stdio.h>
int main() {
    int i; 
    int search, found = 0;
    int arr[5];

    printf("Enter 5 numbers:");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter search element:");
    scanf("%d", &search);

        for(i=0; i<5; i++) {
            if(arr[i] == search) {
                found = 1;
                break;
           }
        }

        if(found == 1) {
            printf("Found\n");
        }
        else {
            printf("not found\n");
        }
    
    return 0;
}