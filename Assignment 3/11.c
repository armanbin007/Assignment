#include <stdio.h>
int main(){
    int n, res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        res = res + (i*i*(i+1)); 
    }
        printf("Result: %d\n", res);
    return 0;
}