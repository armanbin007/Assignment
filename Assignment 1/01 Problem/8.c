#include <stdio.h>
int main(){
    int a,c;
    scanf("%d %*d %d", &a, &c);
    printf("First Value = %d, Last Value = %d\n", a, c);
    
    return 0;
}