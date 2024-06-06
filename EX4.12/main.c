#include <stdio.h>

int main(void) {
    
    for (int number = 2; number <= 100; number++) {
        int isPrime = 1;

        for (int divisor = 2; divisor <= number/2; divisor++) {
            if (number % divisor == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
             printf("%d\n", number);
        }
    }

}