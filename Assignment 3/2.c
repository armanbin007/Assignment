#include <stdio.h>
int main(){
    int a, sum = 1;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++){
        if(i == a){
            printf("%d\n", sum);
        } else{
        printf("%d, ", sum);
        sum = sum + 2;
        }
    }
    return 0;
}