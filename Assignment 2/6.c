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
    } else if(a == 0){
        printf("Zero is not a valid input\n");
    } else{
        printf("Negative input is not valid\n");
    }
    return 0;
}