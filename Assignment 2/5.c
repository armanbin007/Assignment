#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a > 0){
        while(a % 2 == 0){
            a /= 2;
        }
        if(a == 1){
        printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else {
        printf("No\n");
    }
    return 0;
}