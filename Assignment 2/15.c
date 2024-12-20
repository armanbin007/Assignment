#include <stdio.h>
int main(){
    int x, n1, n2, n3;
    scanf("%d", &x);
    scanf("%d", &n1);
    if(n1 == x){
        printf("Right, Player-2 wins!\n");
        return 0;
    } else {
        printf("Wrong, 2 Chance(s) Left!\n");
    }
        scanf("%d", &n2);

      if(n2 == x){
        printf("Right, Player-2 wins!\n");
        return 0;  
    } else {
        printf("Wrong, 1 Chance(s) Left!\n");
    }
        scanf("%d", &n3);

        if(n3 == x){
            printf("Right, Player-2 wins!\n");
    } else {
        printf("Wrong, 0 Chance(s) Left!\nPlayer-1 wins!");
        }
    return 0;
}
