#include <stdio.h>
int main(){
    int x, sum=0;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if(i % 2 == 0){
            sum = sum-i;
        } else{
            sum = sum+i;
        }
    } printf("Result: %d\n", sum);
    
    return 0;
}