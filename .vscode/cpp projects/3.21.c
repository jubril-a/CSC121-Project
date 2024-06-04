#include <stdio.h>
int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int a=number++;
    int b=++number;
    printf("Preincrementing here before assiging to a is:  %d \n", b);
    printf("Postincrementing here before assigning to b is:  %d \n", a);

}