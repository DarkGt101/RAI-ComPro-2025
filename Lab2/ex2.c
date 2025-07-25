#include <stdio.h>

int main(){

    int num;
    int hour = 60;
    printf("Enter total minute: ");
    scanf("%d", &num);

    int convert_hour = num/60;
    int convert_minute = num%60;
    printf("%d minutes is %d hour(s) and %d minute(s)\n", num, convert_hour,convert_minute );


    return 0;

}