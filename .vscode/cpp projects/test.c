#include <stdio.h>
#include <math.h>

// this program takes a while to run 

int main(void)
{
    int i, a1 = 0, a2 = 0, a3 = 0, a4 = 0;
    float pi = 0, num1, num2, num3, num4, numerator = 4.0, denominator = 1.0, x;
    // header
    puts("Term  |  value");
    // series
    for (i = 1;; i++)
    {
        x = numerator / denominator;

        if (i % 2 == 0)
        {
            pi -= x;
        }
        else
        {
            pi += x;
        }

        denominator += 2.0;

        // print value
        printf("%d  |  %f \n", i, pi);


        // use floor() to get values
        if ((floor(1000 * pi) / 1000) == 3.140000f && a1 == 0)
        {
            a1 = i;
        }
        if ((floor(1000 * pi) / 1000) == 3.141000f && a2 == 0)
        {
            a2 = i;
        }
        // if ((floor(10000 * pi) / 10000) == 3.141500f && a3 == 0)
        // {
        //     a3 = i;
        // }
        // if ((floor(100000 * pi) / 100000) == 3.141590f && a4 == 0)
        // {

        //     a4 = i;
        // }

        // end loop after values are found
        if (a1 != 0 && a2 != 0 )//&& a3 != 0 && a4 != 0)
        {
            break;
            printf("3.14 is found at %dth term\n", a1);
            printf("3.141 is found at %dth term\n", a2);
            printf("3.1415 is found at %dth term\n", a3);
            printf("3.1419 is found at %dth term\n", a4);
        }
    }
}