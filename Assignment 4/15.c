#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &A[i]);
    } for(int i = 0; i<n; i++){
        if(A[i] % 3 == 0){
            A[i] = -1;
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d ", A[i]);
    }
    return 0;
}
