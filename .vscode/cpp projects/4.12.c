#include <stdio.h>
int main(void)
{
    int number = 1;
    while (number < 100)
    {
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
        if (prime == 0)
        {
            printf("%d \n", number);
        }
        number++;
    }
}