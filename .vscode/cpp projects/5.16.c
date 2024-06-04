#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double calc_area(int a, int b, int c)
{
    // make sure values are non zeros
    if (a == 0 || b == 0 | c == 0)
    {
        puts("Values should be non-zero");
        exit(0);
    }

    // if values could make area of triangles
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        // calculate half angle
        int s = (a + b + c) / 2;

        // calculate with heros formula
        return (sqrt(s * (s - a) * (s - b) * (s - c)));
    }
    else
    {
        puts("These arent values of a triangle !");
        exit(0);
    }
}

int main(void)
{
    // first find out if the numbers can be a triangle
    int a, b, c;
    double area;
    puts("Enter first number: ");
    scanf("%d", &a);
    puts("Enter second number: ");
    scanf("%d", &b);
    puts("Enter third number: ");
    scanf("%d", &c);

    area = calc_area(a,b,c);
    printf("The area of the triangle is %f", area);
}