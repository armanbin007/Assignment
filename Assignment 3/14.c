#include <stdio.h>
int main(){
    int x,y;
    int fac1 = 1, fac2 = 1, fac3 = 1;
    scanf("%d %d", &x, &y);
    for (int i = x; i > 0; i--){
        fac1 *= i;
    } 
    for (int i = y; i > 0; i--){
        fac2 *= i;
    }
        int z = x - y;
    for (int i = z; i > 0; i--)
    {
        fac3 *= i;
    }

        int nCr = ( fac1 / (fac2 * (fac3)));
        printf("%d", nCr);
    
    
    return 0;
}