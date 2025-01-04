#include <stdio.h>
int main(){
    int n, m, size = 0;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    scanf("%d", &m);
    int B[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &B[i]);
    }
    int union_array[n + m];
    for(int i = 0; i < n; i++){
        union_array[size++] = A[i];
        }
    for(int i = 0; i < m; i++){
        int exists = 0;
        for(int k = 0; k < size; k++) {
            if (union_array[k] == B[i]) {
                exists = 1;
                break;
            }
        }
        if(!exists){
            union_array[size++] = B[i];
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d ", union_array[i]);
    }
    return 0;
}
