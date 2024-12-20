#include <stdio.h>
#include <math.h>
int main(){
    float X,Y;
    scanf("%f %f", &X, &Y);
    printf("Addition: %.1f\n", X+Y);
    printf("Subtraction: %.1f\n", X-Y);
    printf("Multiplication: %.1f\n", X*Y);
    printf("Quotient: %.0f\n", X/Y);
    float remainder = fmod(X, Y);
    printf("Remainder: %.1f\n", remainder);
     
    
    return 0;
}