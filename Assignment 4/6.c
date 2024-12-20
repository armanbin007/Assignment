#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n], arr3[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%d", &arr2[i]);
        arr3[i] = arr1[i] + arr2[i];
        printf("%d ", arr3[i]);
    }
    return 0;
}
