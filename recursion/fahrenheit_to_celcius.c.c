// farhainhight to celcius

#include <stdio.h> 

float convertTemp(float celcius);

int main() {

   float far = convertTemp(37);
   printf("far : %0.2f\n", far);
    return 0;
}

float convertTemp(float celcius) {
    float far = celcius * (9.0/5.0) + 32;
    return far;
}

// output:
//        far : 98.60