#include <stdio.h>
int main(){
    int x, N;
    scanf("%d", &x);
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
        int n;   
        scanf("%d", &n);
        if(n == x){
            printf("Right, Player-2 wins!\n");
            break;
        } else {
            printf("Wrong, %d Choice(s) Left!\n", N-i);
    }   if(i == N){
        printf("Player-1 wins!\n");
    }
        }
    return 0;
}