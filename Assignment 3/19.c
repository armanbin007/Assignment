#include <stdio.h>
#include <math.h>

int fact(int x){
    int f = 1;
    for (int i = 1; i <= x; i++){
      f *= i;
    }
     return f;
}

int main(){
    float x;
    scanf("%f", &x);
    float sinx;
    sinx =  (x - ((pow(x,3.0))/fact(3)) + ((pow(x,5.0))/fact(5)) - ((pow(x,7.0))/fact(7)) + (pow(x,9.0)/fact(9)) - (pow(x,11.0)/fact(11)));
    printf("%.3f\n", sinx);
    return 0;
}