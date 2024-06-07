#include <stdio.h>

int main() {
    double pi = 0.0;
    int n = 0;
    int sign = 1;
    double term;
    int precision1 = 0, precision2 = 0, precision3 = 0, precision4 = 0;

    printf("Terms\tApproximation of Pi\n");
    printf("-----------------------------\n");

    do {
        term = sign * (4.0 / (2 * n + 1));
        pi += term;
        sign = -sign;
        n++;

        printf("%d\t%.15f\n", n, pi);

        if (!precision1 && pi >= 3.14 && pi < 3.15) precision1 = n;
        if (!precision2 && pi >= 3.141 && pi < 3.142) precision2 = n;
        if (!precision3 && pi >= 3.1415 && pi < 3.1416) precision3 = n;
        if (!precision4 && pi >= 3.14159 && pi < 3.14160) precision4 = n;
    } while (precision4 == 0);

    printf("\nTerms required to reach:\n");
    printf("3.14: %d\n", precision1);
    printf("3.141: %d\n", precision2);
    printf("3.1415: %d\n", precision3);
    printf("3.14159: %d\n", precision4);

    return 0;
}
