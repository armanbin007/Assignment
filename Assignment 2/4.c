#include <stdio.h>
int main(){
    float x,y,z;
    scanf("%f %f %f", &x, &y, &z);
    float sum = x+y+z;
    if(x > 0 && y > 0 && z > 0){
        if(sum == 180){
            printf("Yes\n");
        } else if(sum > 180){
            printf("No\n");
        }
    }   else {
        printf("No\n");
    }
    return 0;
}