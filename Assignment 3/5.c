#include <stdio.h>
int main(){
    int X,Y;
    scanf("%d %d", &X, &Y);
    while(X != Y){
        printf("%d, ", X*X);
    if(X<Y){
        X++;
    } else if(X>Y){
        X--;
    } 
    }
     if(X==Y){
        printf("Reached!\n");
     }
    return 0;
}