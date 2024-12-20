#include <stdio.h>
int main(){
    int n, fac = 1;
    scanf("%d", &n);
    printf("%d! = ", n);
    for (int i = n; i > 0; i--)
    {
        printf("%d", i);
        if(i > 1){
            printf(" X ");
        }
        fac = fac * i;
    } printf(" = %d", fac);
    
    return 0;
}