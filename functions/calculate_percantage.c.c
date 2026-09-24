// calculate percantage

#include <stdio.h>

float percantage(int obtained, int total);
int obtained, total;
float result;

int main() {

printf("Enter obtained percant:");
scanf("%d", &obtained);

printf("Enter total percant:");
scanf("%d", &total);

result = percantage(obtained, total);
return 0;
}

float  percantage(int obtained, int total) {
float result =( obtained * 100.0) / total;
printf("Percantage = %0.2f \n", result);
return result;
}

/* output:
          Enter obtained percant: 428
          Enter total percant:500
          Percantange = 85.60
*/