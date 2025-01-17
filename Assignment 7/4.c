#include <stdio.h>
int main(){
    int m;
    scanf("%d", &m);
    int mat[m][m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &mat[i][j]);
        }
    } printf("Major diagonal: ");
    for (int i = 0; i < m; i++){
            printf("%d ", mat[i][i]);
        } 
        printf("\nMinor diagonal: ");   
            int j = m-1;
         for (int i = 0; i < m; i++){
            printf("%d ", mat[i][j]);
            j--;
        }    
    return 0;
}