#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++){
        if(i == 1){
            printf("1");
        } else{
        printf(", %d", i);
        }
    }
    
    return 0;
}