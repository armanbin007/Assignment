#include <stdio.h>
int main(){
    int a = 10;
    printf("A. Global: %d\n", a); {
    int a = 20; // Local value
    printf("B. Local: %d\n", a);}
    printf("C. Global: %d\n", a);
    return 0;
}
