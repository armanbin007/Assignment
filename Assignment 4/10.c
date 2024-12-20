#include <stdio.h>
int main(){
    int n, x;
    int flag = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    } 
    scanf("%d", &x); 
    for(int i = 0; i < n; i++){
        if(x == arr[i]){
        if(flag == 0){
         printf("FOUND at index position: %d",i);
        } else{
         printf(", %d", i);
         }
         flag = 1;
      }
    } if(!flag){
      printf("NOT FOUND\n");
    }
    return 0;
}