#include <stdio.h>
int main(){
    int n, size = 0;
    scanf("%d", &n);
    int a[n], u[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        int found = 0;
    for(int j = 0; j < size; j++){
        if(a[i] == u[j]){
            found = 1;
            break;}
        } if(!found){
            u[size] = a[i];
            size++;
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d ", u[i]);
    }
    return 0;
}
