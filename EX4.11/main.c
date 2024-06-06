#include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i=7; i<100; i=i+7) {
        sum = sum + i;
    }

    printf("The sum of all multiples of 7 from 1 to 100 is %d", sum);
}