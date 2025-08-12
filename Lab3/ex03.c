#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0 && num < 101) {
        switch (num % 2 == 0){
            printf("%d is even\n", num);
        default:
            printf("%d is odd\n", num);
        }
    default:
        printf("%d is out of range\n", num);
    }

    return 0;
}