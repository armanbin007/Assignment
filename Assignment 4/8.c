#include <stdio.h>
int main(){
    int n;
    int flag1 = 0, flag2 = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }   
        int max = a[0], min = a[0];

    for(int i = 0; i < n; i++){
        if(a[i] > max){
        max = a[i];
        flag1 = i;
      } if(a[i] < min){
        min = a[i];
        flag2 = i;
    }
} printf("Max: %d, Index: %d\n", max, flag1);
  printf("Min: %d, Index: %d\n", min, flag2);

    return 0;
}