#include <stdio.h>
#include <math.h>
int main(){
    int x, prime = 1;
    scanf("%d", &x);
    
        if(x == 2){
        printf("Prime\n");
    }
    else if (x == 0 || x == 1){
        printf("Not prime\n");
    }
   else{
        for (int i = 2; i <= sqrt(x); i++){
            if (x % i == 0){
                prime = 0;
                break;
            }
        } if(prime == 1){
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }
    return 0;
}