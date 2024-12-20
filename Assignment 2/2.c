#include <stdio.h>
#include <math.h>
int main(){
    float num;
    scanf("%f", &num);
    if(fmod(num, 2) == 0){
        printf("Even\n");
    } else{
        printf("Odd\n");
    }
    return 0;
}