#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        float A, HW, CT, MT, TF;
        scanf("%f %f %f %f %f", &A, &HW, &CT, &MT, &TF);
        float sum = A + HW + CT + (MT*(30.0/50)) + (TF*(40.0/100));

        printf("Student %d: ", i);
        if (sum >= 90 && sum <= 100) {
            printf("A\n");
        } else if (sum >= 86) {
            printf("A-\n");
        } else if (sum >= 82) {
            printf("B+\n");
        } else if (sum >= 78) {
            printf("B\n");
        } else if (sum >= 74) {
            printf("B-\n");
        } else if (sum >= 70) {
            printf("C+\n");
        } else if (sum >= 66) {
            printf("C\n");
        } else if (sum >= 62) {
            printf("C-\n");
        } else if (sum >= 58) {
            printf("D+\n");
        } else if (sum >= 55) {
            printf("D\n");
        } else {
            printf("F\n");
        }
    }
    
    return 0;
}