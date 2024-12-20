#include <stdio.h>
int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    int raw = X;
    printf("Multiplication: %d\n", X*=Y);
    printf("Division: %d\n", raw/=Y);
    
    return 0;
}