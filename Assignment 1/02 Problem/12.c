#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    float x = (b*b) - (4*a*c);
    if(x < 0){
        printf("Imaginary\n");
    } else{
    float root1 = ((-b + sqrt(x)) / (2*a));
    float root2 = ((-b - sqrt(x)) / (2*a));

    printf("%.2f %.2f\n", root1, root2);
    }
    return 0;
}
