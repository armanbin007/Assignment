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
    int intersection[n > m ? m : n];
    for(int i = 0; i < n; i++){
        int found = 0;
        for(int j = 0; j < m; j++){
            if(A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if(found){
            int exists = 0;
            for(int k = 0; k < size; k++) {
                if(intersection[k] == A[i]) {
                    exists = 1;
                    break;
                }
            }
            if(!exists){
                intersection[size++] = A[i];
            }
        }
    }   
    if(size == 0){
        printf("Empty set");
    } else{
        for(int i = 0; i < size; i++){
            printf("%d ", intersection[i]);
        }
    }
    return 0;
}
