#include <stdio.h>
int main(){
    int m,n,sum=0;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
            sum = sum + mat[i][j];
        }
    } printf("%d", sum);
    return 0;
}