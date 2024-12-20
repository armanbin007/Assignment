#include <stdio.h>
int main(){
    int a, b, r;
    scanf("%d %d", &a, &b);
    int x = a, y = b;
    while (y != 0){   
        r = x % y;
        x = y;
        y = r;
    } printf("GCD: %d\n", x);
    int lcm = (a*b) / x;
    printf("LCM: %d\n", lcm);
    
    return 0;
}