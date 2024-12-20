#include <stdio.h>
int main(){
    int a = 10;
    float b = 15.63;

    int i = b;
    float j = a;
    printf("Assignment: %f assigned to an int produces %d\n", b, i);
    printf("Assignment: %d assigned to an float produces %f\n", a, j);

    printf("Type Casting: (float) %d produces %f\n", a, (float)a);
    printf("Type Casting: (int) %f produces %d\n", b, (int)b);
    
    
    return 0;
}