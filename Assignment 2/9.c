#include <stdio.h>
int main(){
    char input;
    scanf("%c", &input);
    if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')){
        printf("Alphabet\n");
    }
    else if(input >= '0' && input <= '9'){
        printf("Digit\n");
    }
    else{
        printf("Special\n");
    }
    return 0;
}