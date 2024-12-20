#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    } int num, position;
    scanf("%d %d", &num, &position);
    for(int i = n; i > position; i--){
        arr[i] = arr[i-1];
    } arr[position] = num;
    for(int i = 0; i<=n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
