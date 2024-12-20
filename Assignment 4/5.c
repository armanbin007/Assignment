#include <stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(i == 0){
            sum = sum + arr[i];
        } else if(i % 2 == 0){
            sum = sum + arr[i];
        }
    }
        printf("%d\n", sum);
    
    return 0;
}