#include <stdio.h>
int main() {
    int n, k, m = 1;
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("Not an odd number\n");
        return 0;
    }
    for (int i = 0; i <= n / 2; i++){
        for (k = 0; k < n / 2 - i; k++){
            printf("_");
        }
        for (int j = 0; j < m; j++){
            printf("*");
        }
        printf("\n");
        m += 2;
    } m -= 2;
    for (int i = n / 2 - 1; i >= 0; i--){
        m -= 2;
        for (k = 0; k < n / 2 - i; k++){
            printf("_");
        }
        for (int j = 0; j < m; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
