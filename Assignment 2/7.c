#include <stdio.h>
int main(){
    float X,Y;
    scanf("%f %f", &X, &Y);
    if(X > Y){
        printf("%.1f is greater that %.1f\n", X,Y);
    } else if(X < Y){
        printf("%.1f is less than %.1f\n", X,Y);
    } else if(X == Y){
        printf("%.1f is equal to %.1f\n", X,Y);
    }
    return 0;
}