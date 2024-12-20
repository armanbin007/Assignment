#include <stdio.h>
#include <math.h>
int main(){
    float X;
    scanf("%f", &X);
    int A, B;
    // if(X > 0){
    //     A = X+1;
    // } else{
    //     A = X+1;
    // }
    // if(X > 0){
    //     B = X;
    // } else{
    //     B = X-1;
    // }

    A = ceil(X); // Round up
    B = floor(X); // Round down
    float C = fabs(X); // Absolute value
    // float C = X;
    // if(X < 0){
    //     C = -X;
    // }
    printf("A = %d, B = %d, C = %.1f\n", A,B,C);
    
    return 0;
}