#include <stdio.h>
int main(){
    for (int i = 1; 1 ; i++)
    {   char a;
        scanf(" %c", &a);
        if(a == 'A'){
            break;
        }
        printf("Input %d: %c\n", i, a);
    }
    
    return 0;
}