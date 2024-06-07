#include <stdio.h>

int isEven(int number) {
    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int integer;

    while (integer != 0) {
        printf("Enter an Integer (Enter 0 to exit): ");
        scanf("%d", &integer);

        if (isEven(integer) == 0) {
            printf("%d is an odd number\n", integer);
        } else {
            printf("%d is an even number\n", integer);
        }
    }
}