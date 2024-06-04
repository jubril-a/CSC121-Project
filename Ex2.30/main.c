#include <stdio.h>

int main(void) {
    int number, remainder,
        firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit;

    printf("Enter a Five Digits Number: ");
    scanf("%d", &number);

    firstDigit = number / 10000;
    remainder = number % 10000;
    secondDigit = remainder / 1000;
    remainder = number % 1000;
    thirdDigit = remainder / 100;
    remainder = number % 100;
    fourthDigit = remainder / 10;
    remainder = number % 10;
    fifthDigit = remainder;

    printf("%d   %d   %d   %d   %d", firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit);
}