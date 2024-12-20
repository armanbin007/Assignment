#include <stdio.h>
int main() {
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
    int diff[n];
    for(int i = 0; i < n; i++){
        int exist = 0;
        for(int j = 0; j < m; j++){
            if(A[i] == B[j]){
                exist = 1;
                break;
            } 
        } if(!exist){
          diff[size++] = A[i];
        }
    } for(int i = 0; i < size; i++){
        printf("%d ", diff[i]);
    }
    return 0;
}