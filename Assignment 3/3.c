#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++){
        if(i == 1){
            printf("1");
        } else{
        if(i % 2 == 0){
            printf(", 0");
        } else {
            printf(", 1");
        }
     }
    }
    return 0;
}