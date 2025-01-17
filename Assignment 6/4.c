#include <stdio.h>
int main(){
    int n, k;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (k = 1; k <= n - i; k++){
            printf("_");
        }
        for (int j = 1; j <= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
