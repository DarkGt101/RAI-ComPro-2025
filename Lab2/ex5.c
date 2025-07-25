#include <stdio.h>

int main(){

    char name[50];
    int age;
    float height;
    char university_name[20];

    printf("Enter your full name: ");
    scanf("%[^\n]", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your heght: ");
    scanf("%f", &height);
    printf("Enter you University name: ");
    scanf("%s", university_name);
    
    printf("Hi! Everyone. This is K.Poom from KMITL. I am %d years old and my height is %.1f cm tall.\n", age, height);
    return 0;
}