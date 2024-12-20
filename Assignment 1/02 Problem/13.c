#include <stdio.h>
#include <math.h>
int main(){
    float x;
    scanf("%f", &x);
    float radian = x * (3.1416/180);
    float eq = (2 * pow(cos(radian), 2) - (sqrt(3) * sin(radian)) + sin(radian/2));
    printf("%f\n", eq);
    return 0;
}