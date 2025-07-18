#include <stdio.h>

int main(){

    float a = 68.01;
    float b = 8.4;
    int c = 3;
    float result = (a+b)-c;
    printf("(%.2f+%.2f)-%d = %.2f",a,b,c, result);
}