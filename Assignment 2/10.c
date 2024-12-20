#include <stdio.h>
int main()
{
    float a, b;
    char x;
    scanf("%f %c %f", &a, &x, &b);
    if (x == '*'){
        float l = a * b; // Multiplication
        printf("Multiplication: %f\n", l);
    }
    else if (x == '+'){
        float l = a + b; // Addition
        printf("Addititon: %f\n", l);
    }
    else if (x == '-'){
        float l = a - b; // Subtraction
        printf("Subtraction: %f\n", l);
    }
    else if (x == '/' && b != 0){
        float l = a / b; // Division
        printf("Division: %f\n", l);
    }
    else{
        printf("Division: Zero as divisor is not valid!\n");
    }

    return 0;
}
