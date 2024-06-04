#include <stdio.h>

int main(void)
{
    int number;
    printf("input a number: ");
    scanf("%d", &number);
    // 5 digits
    if (number > 10000)
    {
        printf("%d   ", number / 10000);
        number = number % 10000;
    }
    // 4 digits
    if (number > 1000)
    {
        printf("%d   ", number / 1000);
        number = number % 1000;
    }
    // 3 digits
    if (number > 100)
    {
        printf("%d   ", number / 100);
        number = number % 100;
    }
    // 2 digits
    if (number > 10)
    {
        printf("%d   ", number / 10);
        number = number % 10;
    }
    // 1 digit
    if (number > 1)
    {
        printf("%d   ", number / 1);
    }
}