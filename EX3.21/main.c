#include <stdio.h>

int main(void) {
    int number = 15;

    //Post-Incrementing: number increases after printf statement
    printf("Post-Incrementing: %d\n", number++);

    //Pre-Incrementing: number increases before printf statement
    printf("Pre-Incrementing: %d\n", ++number);
}