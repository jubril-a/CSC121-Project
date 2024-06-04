#include <stdio.h>
int main(void)
{
    int multiple = 7;
    int interger = 1;
    int sum;
    while (interger < 100)
    {
        sum = sum + (multiple * interger);
        interger++;
    }
    printf("Sum of multiples of %d is %d", multiple, sum);
}