#include <stdio.h>

int main(void)
{
    // values needed
    int total, CPG, AVG, parking, tolls, sum;
    printf("Total miles driven per day: ");
    scanf("%d", &total);
    printf("Cost per gallon of gasoline: ");
    scanf("%d", &CPG);
    printf("Average miles per gallon: ");
    scanf("%d", &AVG);
    printf("Parking fees per day: ");
    scanf("%d", &parking);
    printf("Tolls per day: ");
    scanf("%d", &tolls);
    // calculate
    sum = ((total * CPG) / AVG) + parking + tolls;
    // print
    printf("total driving cost is %d", sum);
}
