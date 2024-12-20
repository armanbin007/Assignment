#include <stdio.h>
int main(){
    int n;
    int term = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        term = term * 10 + i;
        sum += term;
    }
        printf("%d\n", sum);
    
    return 0;
}