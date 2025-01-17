#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int m = n;
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= m; j--){
            printf("%d", j);
        }
         printf("\n");
         m--;
    }
    
    return 0;
}