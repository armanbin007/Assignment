#include <stdio.h>
int main(){
    int n, a = 0, b = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if(i == 1){
            printf("1");
        } else{
            int temp = a+b;
            a = b;
            b = temp;
            printf(", %d", temp);
        }
    }
    
    return 0;
}