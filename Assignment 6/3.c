#include <stdio.h>
int main(){
    int n, k = 1, m = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = k; j <= m; j++){
            printf("%d", j);
        } printf("\n");
        k++;
        m = m + 2;
    }
    return 0;
}