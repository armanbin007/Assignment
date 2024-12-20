#include <stdio.h>
int main(){
    int N;
    float sum = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        float a;
        scanf("%f", &a);
        sum = sum + a;
    } printf("AVG of %d inputs: %f\n", N, sum/N);
    return 0;
}