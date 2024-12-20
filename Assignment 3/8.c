#include <stdio.h>
int main(){
    int a, rev = 0;
    scanf("%d", &a);
    while(a != 0){
        int temp = a % 10;
        rev = rev * 10 + temp;
        a = a / 10;
    }
    printf("%d\n", rev);
    return 0;
}