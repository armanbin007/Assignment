#include <stdio.h>
int main(){
    int n, k, m = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (k = 1; k <= n - i; k++){
            printf("_");
        }
        for (int j = 1; j <= m; j++){
            printf("*");
        }
        printf("\n");
        m +=2;
    }
    return 0;
}
