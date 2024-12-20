#include <stdio.h>
int main(){
    unsigned int a;
    unsigned long int b;
    unsigned long long int c;
    unsigned short int d;

    a = 4294967295;
    b = 4294967295;
    c = 184467440737095516;
    d = 65535;

    printf("The unsigned int value: %u\nThe unsigned long int value: %lu\nThe unsigned long long int value: %llu\nThe unsigned short int value: %hu", a,b,c,d);

    return 0;
}