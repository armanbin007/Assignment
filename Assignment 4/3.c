#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    } for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
        sum = a[i] + sum;
        }
    } printf("%d\n", sum);
    
    return 0;
}