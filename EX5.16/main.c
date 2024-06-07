#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b, double c) {
    //According to the Triangle Inequality Theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1;
    }
}

int main(void) {
    double side_a, side_b, side_c, area;

    printf("Enter the sides of the traingle separated by spaces: ");
    scanf("%lf%lf%lf", &side_a, &side_b, &side_c);

    area = calculateArea(side_a, side_b, side_c);

    if (area == -1) {
        printf("The sides %lf, %lf, and %lf do not form a valid triangle.", side_a, side_b, side_c);
    } else {     
        printf("The area of the triangle with sides %lf, %lf, and %lf is %lf", side_a, side_b, side_c, area);
    }    
}