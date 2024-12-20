#include <stdio.h>
int main(){
    int a, rev = 0;
    scanf("%d", &a);
    int x = a;
    while(x != 0){
        int temp = x % 10;
        rev = rev * 10 + temp;
        x = x / 10;
    } if (a == rev){
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    
    return 0;
}