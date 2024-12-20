#include <stdio.h>
#include <math.h>
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
        if(b != 0){
        int Case;
        scanf("%d", &Case);
        if(Case == 1){
        float result = a/b;
        if(result < 0 && result > -1){
            result = 0;
        }
        printf("Quotient: %.0f\n", result);
        } else if(Case == 2){
            printf("Remainder: %.1f\n", fmod(a,b));
        }
     } else{
        printf("Error: Divisor is zero\n");
     }
    }
    return 0;
}