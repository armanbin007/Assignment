#include <stdio.h>
int main(){
    float marks;
    scanf("%f", &marks);
    if(marks >= 90 && marks <= 100){
        printf("Grade: A\n");
    } else if(marks >= 86 && marks < 90){
        printf("Grade: A-\n");
    } else if(marks >= 82 && marks < 86){
        printf("Grade: B+\n");
    } else if(marks >= 78 && marks < 82){
        printf("Grade: B\n");
    } else if(marks >= 74 && marks < 78){
        printf("Grade: B-\n");
    } else if(marks >= 70 && marks < 74){
        printf("Grade: C+\n");
    } else if(marks >= 66 && marks < 70){
        printf("Grade: C\n");
    } else if(marks >= 62 && marks < 66){
        printf("Grade: C-\n");
    } else if(marks >= 58 && marks < 62){
        printf("Grade: D+\n");
    } else if(marks >= 55 && marks < 58){
        printf("Grade: D\n");
    } else if(marks >= 0 && marks < 55){
        printf("Grade: F\n");
    }
    return 0;
}