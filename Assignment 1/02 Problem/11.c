#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    
    int condition1 = (a + b) <= 80 && b >= 0;
    int condition2 = (a - b) == 0 || c != 0;
    int condition3 = a != b || (b < a) && c > 0;

    printf("a) %d\n", condition1);
    printf("b) %d\n", condition2);
    printf("c) %d\n", condition3);
    
    return 0;
}