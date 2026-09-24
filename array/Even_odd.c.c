 #include <stdio.h>
int main() {
    int i; 
    int evencount = 0, oddcount = 0;
    int arr[5];

    printf("Enter 5 numbers:");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    
    
        if(arr[i] % 2 == 0) {
            evencount++;
        }
        else {
            oddcount++;
        }
    }
    printf("Even =%d\n", evencount);
    printf("odd =%d\n", oddcount);
    
    return 0;
}