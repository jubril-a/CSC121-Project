#include <stdio.h>
int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int divi = 2;
    int prime = 0;
    while (divi < number)
    {
        if ((number % divi) == 0)
        {
            prime = 1;
            break;
        }
        divi++;
    }
    if (prime == 1)
    {
        printf("%d is not a prime number", number);
    }
    else
    {
        printf("%d is a prime number", number);
    }
}