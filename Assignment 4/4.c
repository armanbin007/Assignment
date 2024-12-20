#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    float sum = 0, avg, a[n];
    for(int i = 0; i < n; i++){
        scanf("%f", &a[i]);
        sum = a[i] + sum;
    }
    avg = sum / n;
    printf("%.2f\n", avg);
    
    return 0;
}