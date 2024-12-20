#include <stdio.h>
int main(){
    int n1,n2;
    scanf("%d", &n1);
    int A[n1], temp1[n1];
    for(int i = 0; i<n1; i++){
        scanf("%d", &A[i]);
        temp1[i] = A[i];
    } scanf("%d", &n2);
    int B[n2], temp2[n2];
    for(int i = 0; i<n2; i++){
        scanf("%d", &B[i]);
        temp2[i] = B[i];
    }
    printf("Array A: ");
    for(int i = 0; i<n2; i++){
            A[i] = temp2[i];
            printf("%d ", A[i]);
    } 
    printf("\nArray B: ");
    for(int i = 0; i<n1; i++){
            B[i] = temp1[i];
            printf("%d ", B[i]);
    }
    return 0;
}
