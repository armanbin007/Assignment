#include <stdio.h>
int main(){
    int n, m = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(m % 2 == 0){
                printf("0");
                m++;
            }else{
                printf("1");
                m++;
            }
        } printf("\n");
    }
    return 0;
}