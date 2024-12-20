#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int A[n], B[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    } for(int i = 0; i < n; i++){
        B[i] = A[i];
    }
    for(int i = 0; i < (n/2); i++){
        int temp = B[i];
        B[i] = B[n - i - 1];
        B[n - i - 1] = temp;
    } printf("Array A: ");
    for(int i = 0; i<n; i++){
        printf("%d ", A[i]);
    } printf("\nArray B: ");
    for(int i = 0; i<n; i++){
        printf("%d ", B[i]);
    }
    return 0;
}
