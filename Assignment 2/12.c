#include <stdio.h>
int main(){
    float a,b;
    scanf("%f %f", &a, &b);
    int Choice;
    scanf("%d", &Choice);
    if (Choice == 1){
        printf("Addition: %.1f\n", a+b);
    } else if (Choice == 2){
        printf("Subtraction: %.1f\n", a-b);
    } else if (Choice == 3){
        printf("Multiplication: %.1f\n", a*b);
    } else if (Choice == 4 ){
        float result = a/b;
        if(result < 0 && result > -1){
            result = 0;
        }
        printf("Quotient: %.0f\n", result);
    }
    return 0;
}