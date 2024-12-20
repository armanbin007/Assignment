#include <stdio.h>
int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    int increment = X;
    increment += Y;
    printf("Incremented Value: %d\n", increment);
    int decrement = X;
    decrement -= Y;
    printf("Decremented Value: %d\n", decrement);
    
    return 0;
}