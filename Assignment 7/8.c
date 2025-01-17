#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    } printf("Max: ");
    int max = mat[0][0], row = 0, column = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if(mat[i][j] > max){
                max = mat[i][j];
                row = i, column = j;
            }
        }
    } printf("%d\n", max);
      printf("Location: [%d][%d]", row,column);
    return 0;
}