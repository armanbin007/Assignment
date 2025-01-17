#include <stdio.h>
int main(){
    int m;
    scanf("%d", &m);
    int mat[m][m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            mat[i][j] = 0;
        }
    } for (int i = 0; i < m; i++){
            mat[i][i] = 1;
        } for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", mat[i][j]);
        } printf("\n");
    }
    return 0;
}