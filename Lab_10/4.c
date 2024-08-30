#include <stdio.h>

void main() {
    float num1, num2, num3;
    float largest;

    // Input the three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    switch (num1>num2){
        case 0:
           printf("%f",num2*num3);
           break;
        case 1:
           printf("%f",num1*num3);
           break;
    }

    
