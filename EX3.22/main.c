#include <stdio.h>

int main(void) {
    int number;
    int isPrime = 1;

    printf("Enter an Integer: ");
    scanf("%d", &number);

    for (int divisor=2; divisor <= number/2; divisor++) {
        if (number % divisor == 0) {
            isPrime = 0;
            printf("%d is not a prime number since it is divisible by %d", number, divisor);
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number", number);
    }
}