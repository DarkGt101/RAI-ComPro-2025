#include <stdio.h>

int main(){

    //declare variables
    int num;
    float decimal;
    char a;

    //int
    printf("Please enter an integer value: ");
    scanf("%d", &num);

    printf("You entered %d\n",num);

    //float
    printf("Please enter a float value: ");
    scanf("%f", &decimal);

    printf("You entered %.1f\n", decimal);
 
    //character
    printf("Please enter a character: ");
    scanf(" %c", &a);

    printf("You entered %c\n", a);

    return 0;
}