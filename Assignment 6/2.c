#include <stdio.h>
int main(){
    int n, k=1;
    scanf("%d", &n);
    int m = n;
    for (int i = 1; i <= n; i++){
        for (int j = k; j <= m; j++){
            printf("%d", j);
        } printf("\n");
        m++;
        k++;
    }
    
    return 0;
}